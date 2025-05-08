#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <unordered_map>
#include <cctype>

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

class Lexer {

    public:
        std::unordered_map<std::string, bool> keywords;
        
        Lexer() {
            keywords["Let"] = true;
            keywords["be"] = true;
            keywords["set_breakpoint"] = true;
            keywords["From"] = true;
            keywords["until"] = true;
            keywords["by"] = true;
            keywords["is"] = true;
            keywords["rewind"] = true;
        }

};

struct Token {
    TokenType token;
    std::string value;
};

void read_state(std::vector<char> characters, TokenType *current_state, Lexer object) {
    if (characters.at(characters.size() - 1) == ' ') {
        std::string result = "";
        for (int i = 0; i < characters.size()-1; ++i) {
            result += characters.at(i);
        }
        if (object.keywords.find(result) != object.keywords.end()) {
            *current_state = TokenType::KEYWORD;        
        } else {
            *current_state = TokenType::IDENTIFIER;
        }
    }
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
        Lexer obj1 = Lexer();
        TokenType initial_state = TokenType::IDLE;
        TokenType* current_state = &initial_state;
        while (std::getline(file, line)) {
            for (char ch : line) {
                characters.push_back(ch);
                read_state(characters, current_state, obj1);

            }
        }
    }
    return 0;
    
}



