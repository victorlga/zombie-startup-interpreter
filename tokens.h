// tokens.h
#ifndef TOKENS_H
#define TOKENS_H

enum {
    CREATE = 256, // Starting from 256 to avoid ASCII conflicts
    WITH_NAME,
    IF,
    WHILE,
    IS,
    NOT,
    LESS_THAN,
    GREATER_THAN,
    EQUAL_TO,
    COMMA,
    DOT,
    OR,
    AND,
    PLUS,
    MINUS,
    STAR,
    SLASH,
    LPAREN,
    RPAREN,
    STRING,
    NUMBER,
    IDENTIFIER,
    NUMBER_TYPE,
    TEXT_TYPE,
    BELIEF_TYPE,
    SALARY,
    COMPANY,
    ROLE,
    FUND,
    PORTFOLIO_SIZE,
    INVESTMENT_STRATEGY,
    CASH,
    MONTHLY_REVENUE,
    MONTHLY_EXPENSES,
    PRODUCT,
    STARTUP,
    VENTURE_FIRM,
    WORKER,
    HIRES,
    LAYOFFS,
    ASKS,
    TO_RAISE,
    THROWS_MONEY,
    DIES,
    INCREASES,
    DECREASES,
    IT_HAS,
    OF,
    SHOWS
};

#endif /* TOKENS_H */
