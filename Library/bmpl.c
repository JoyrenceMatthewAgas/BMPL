#include "all.h"

char *TT_INT = "INT";
char *TT_FLOAT = "FLOAT";
char *TT_PLUS = "PLUS";
char *TT_MINUS = "MINUS";
char *TT_MUL = "MUL";
char *TT_DIV = "DIV";
char *TT_LPAREN = "LPAREN";
char *TT_RPAREN = "RPAREN";

struct token {
    char *type, *value;
}

void init_tokens(struct token *token_type, struct token *token_value) {
    token_type -> type;
    token_value -> value;
}

void reproduce_tokens(struct token *self) {
    char result[1000];
    if (self.value) {
        char *half = concat_str(self.type, ":");
        return concat_str(half, self.value);
    }
    return self.type;
}

struct lexer {
    char text[10000];
    int pos = -1;
    int current_char;
}

void advance(struct lexer *self) {
  
}
