#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <unordered_map>
#include <cctype>
#include <map>

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
        std::unordered_map<std::string, bool> keywords_;
        std::unordered_map<TokenType, std::string> token_list_;
        Lexer() {
            keywords_["Let"] = true;
            keywords_["be"] = true;
            keywords_["set_breakpoint"] = true;
            keywords_["From"] = true;
            keywords_["until"] = true;
            keywords_["by"] = true;
            keywords_["is"] = true;
            keywords_["rewind"] = true;
        }

};

struct Token {
    TokenType token;
    std::string value;
};

void read_state(std::vector<char> characters, TokenType *current_state, Lexer object) {

    std::string result = "";
    for (int i = 0; i < characters.size()-1; ++i) {
        if (!std::isalpha(characters.at(i))) {
            return
        }
        result += characters.at(i);
    }
    if (object.keywords_.find(result) != object.keywords_.end()) {
        *current_state = TokenType::KEYWORD;        
    } else {
        *current_state = TokenType::IDENTIFIER;
    }
    object.token_list_.insert({*current_state, std::to_string(result)});

    characters.clear();
    
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
                if (ch == ' ') {
                    read_state(characters, current_state, obj1);
                } else {
                    characters.push_back(ch);
                }    
            }
        }
    }
    return 0;
    
}



