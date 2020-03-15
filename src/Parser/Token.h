#ifndef TOKEN_H
#define TOKEN_H

#include <string>

typedef enum TokenType {
    // Single-character tokens.
    LEFT_PAREN, RIGHT_PAREN, LEFT_BRACE, RIGHT_BRACE,
    COMMA, DOT, MINUS, PLUS, SEMICOLON, SLASH, STAR,

    // One or two character tokens.
    BANG, BANG_EQUAL,
    EQUAL, EQUAL_EQUAL,
    GREATER, GREATER_EQUAL,
    LESS, LESS_EQUAL,

    // Literals.
    IDENTIFIER, STRING, NUMBER,

    // Keywords.
    AND, CLASS, ELSE, FALSE, FUN, FOR, IF, NIL, OR,
    PRINT, RETURN, SUPER, THIS, TRUE, VAR, WHILE,

    COMMENT, WHITE, EOFF, ERROR
}TokenType;

class Token{
    public:
        Token( int t, std::string lex, int lin);
        std::string toString( void);
        int getType( void);
    private:
        int type;
        std::string lexeme;
        int line;
};
#endif
