#include "parser.h"

T_token lookahead_token;

T_token get_lookahead() {
    return lookahead_token;
}

void next_token() {
    lookahead_token = lex();
}

T_statement_list parse_statement_list() {
    if (END != get_lookahead()->kind) {
        T_statement statement = parse_statement();
        T_statement_list statement_list = parse_statement_list();
        return create
    }
}
