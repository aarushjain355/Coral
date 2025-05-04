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
    IDLE,
    COMMENT,
};

struct Token {
    TokenType token;
};

void read_state(std::vector<char> characters) {
     
}

int main(int argc, char* argv[]) {

    if (argc < 2) {
        std::cerr << "Please provide input file";
        return 1;
    }
    {
        std::ifstream file(argv[1]);
        std::string line;
        std::vector<char> characters;
        while (std::getline(file, line)) {
            for (char ch : line) {
                characters.push_back(ch);
                read_state(characters);

            }
        }
    }
    return 0;
    
}



