#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <unordered_map>
#include <cctype>
#include <map>
#include <sstream>

using namespace std;

enum class TokenType {  
    NUMBER,
    FLOAT,
    OPERATOR,
    KEYWORD,
    IDENTIFIER,
    IDLE,
    COMMENT,
    ERROR,
};

// TOOK CARE OF KEYWORD, ERROR, IDENTIFIER, IDLE, OPERATOR
// Need to take care of number, float, operator, and comment
class Lexer {

    public:
        std::unordered_map<std::string, bool> keywords_;
        std::unordered_map<char, bool> operators_;
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
            operators_['+'] = true;
            operators_['-'] = true;
            operators_['*'] = true;
            operators_['/'] = true;
        }
};

struct Token {
    TokenType token;
    std::string value;
};

bool is_number(const std::string& str) {
    try {
        size_t pos;
       //std::cout << "Attempting to convert: '" << str << "'" << std::endl;
        std::stod(str, &pos);  // Try converting to double
        return pos == str.length();  // True only if whole string was parsed
    } catch (...) {
        return false;  // Conversion failed
    }
}

void read_string_state(std::vector<char> characters, TokenType *current_state, Lexer object) {

    std::string result = "";
    if (characters.size() > 0 && object.operators_.find(characters.at(0)) != object.operators_.end()) {
        *current_state = TokenType::OPERATOR; 
        object.token_list_.insert(std::make_pair(*current_state, std::string(1, characters.at(0))));


    } else {
        // Add in comment code somewhere here
        for (int i = 0; i < characters.size()-1; ++i) {
            if (!std::isalpha(characters.at(i))) {
              
                *current_state = TokenType::ERROR;
                object.token_list_.insert(std::make_pair(*current_state, result));
                break;
            }
            result += characters.at(i);
        }
        if (object.keywords_.find(result) != object.keywords_.end()) {
            *current_state = TokenType::KEYWORD;        
        } else if (is_number(result)) {
            *current_state = TokenType::NUMBER;
            std::size_t pos;
            double num = std::stod(result, &pos);
        } else {
            *current_state = TokenType::IDENTIFIER;
        }
        object.token_list_.insert(std::make_pair(*current_state, result));
    }
    characters.clear();
   
    
}


void read_float(std::vector<char> characters, TokenType *current_state, Lexer object) {
    std::string result;
    for (int i = 0; i < characters.size(); ++i) {
        result += characters[i];
    }
    std::cout << "Attempting to convert: '" << result << "'" << std::endl;
    float value = std::stof(result);
    *current_state = TokenType::FLOAT;
    cout << "HELLO";
    object.token_list_.insert(std::make_pair(*current_state, result));
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
        bool numeric_value = false;
        while (std::getline(file, line)) {
            for (char ch : line) {
                
                if (ch == ' ') {
                    if (numeric_value) {
                        read_float(characters, current_state, obj1);
                        numeric_value = false;
                    } else {
                        read_string_state(characters, current_state, obj1);
                        
                    }
                } else if (ch == '.') {
                   numeric_value = true;
                } else {
                    cout << characters.size() << endl;
                    characters.push_back(ch);
                    
                }  
            }
            
        }

        // cout << obj1.token_list_.size();
        // for (const auto& pair : obj1.token_list_) {
        //     std::cout << pair.second << std::endl;
        // }
    
    }
    
    return 0;
    
}



