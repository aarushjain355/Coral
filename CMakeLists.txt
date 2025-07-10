cmake_minimum_required(VERSION 3.10)
project(CoralCompiler)

set(CMAKE_CXX_STANDARD 17)

# Find LLVM
find_package(LLVM REQUIRED CONFIG)

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

# Map LLVM components to actual library names
llvm_map_components_to_libnames(LLVM_LIBS
  Core
  Support
  IRReader
)

# Find ZeroMQ using pkg-config
find_package(PkgConfig REQUIRED)
pkg_check_modules(ZMQ REQUIRED libzmq)

message(STATUS "ZeroMQ found: ${ZMQ_LIBRARIES}")
message(STATUS "ZeroMQ include dirs: ${ZMQ_INCLUDE_DIRS}")

link_directories(/opt/homebrew/lib)
# Add executable and source files
add_executable(coral_compiler
    ast_tree_generator.cpp
    coralBaseListener.cpp
    coralLexer.cpp
    coralParser.cpp
    coralListener.cpp 
    zeromqpublisher.cpp
    semantic_analysis.cpp
    ir_generation.cpp
    main.cpp
)

# Include directories for LLVM, ANTLR4, and ZeroMQ
target_include_directories(coral_compiler PRIVATE
    ${LLVM_INCLUDE_DIRS}
    ${CMAKE_SOURCE_DIR}/antlr4-cpp-runtime-install/include/antlr4-runtime
    ${ZMQ_INCLUDE_DIRS}
)

# Link directories for ANTLR4 runtime (if needed)
target_link_directories(coral_compiler PRIVATE
    ${CMAKE_SOURCE_DIR}/antlr4-cpp-runtime-install/lib
)

# Link libraries: ANTLR4 runtime, LLVM libs, and ZeroMQ libs
target_link_libraries(coral_compiler PRIVATE
    antlr4-runtime
    ${LLVM_LIBS}
    ${ZMQ_LIBRARIES}
)
