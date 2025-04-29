#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

enum class TokenType {  
    NUMBER,
    FLOAT,
    OPERATOR,
    KEYWORD,
    IDENTIFIER,
};

struct Token {
    TokenType token;
};



void read_state(char current_character) {
    
}

int main(int argc, char* argv[]) {

    if (argc < 2) {
        std::cerr << "Please provide input file";
        return 1;
    }
    {
        std::ifstream file(argv[1]);
        std::string line;
        while (std::getline(file, line)) {
            for (char ch : line) {
                std::cout << ch << endl;
            }
        }
    }
    return 0;
    
}



