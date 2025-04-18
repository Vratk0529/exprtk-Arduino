#include <Arduino.h>
#define EXPRTK_NO_INLINE
#include "exprtk.hpp"

class expressionEval {
    public:
    void init();
    double calculate(String input);

    private:
    typedef exprtk::symbol_table<double> symbol_table_t;
    typedef exprtk::expression<double>   expression_t;
    typedef exprtk::parser<double>       parser_t;

    symbol_table_t _symbol_table;

    double varx, vary, varz, varA, varB, varC, varD;
    double vecu[3], vecv[3], vecw[3];
};