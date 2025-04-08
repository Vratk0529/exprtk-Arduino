#include "calculate.hpp"
#include <string>

void expressionEval::init()
{
    _symbol_table.add_variable("x", varx);
    _symbol_table.add_variable("y", vary);
    _symbol_table.add_variable("z", varz);

    _symbol_table.add_variable("A", varA);
    _symbol_table.add_variable("B", varB);
    _symbol_table.add_variable("C", varC);
    _symbol_table.add_variable("D", varD);

    _symbol_table.add_vector("u", vecu);
    _symbol_table.add_vector("v", vecv);
    _symbol_table.add_vector("w", vecw);

    _symbol_table.add_constants();
}

double expressionEval::calculate(String input)
{
    expression_t expression;
    expression.register_symbol_table(_symbol_table);

    parser_t parser;
    if (parser.compile(input.c_str(), expression))
        return expression.value();
    else
        return NAN;
}