#pragma once

const int TOTAL_OPERATIONS = 6;

enum FunctionType {
    add_fun,
    sub_fun,
    mul_fun,
    div_fun,
    sin_fun,
    cos_fun
};

// Represents single math operation, for example multiplication.
// Specifies how many arguments it has, its string symbol
// and what to put for a replacement if user hasn't specified
// all arguments
struct MathFuction {
    const std::string symbol;
    const FunctionType type;
    const int argument_n;
    const std::string fix_string;   

    MathFuction(std::string symbol, FunctionType type, int argument_n, std::string fix_string)
        :symbol(symbol),
        type(type),
        argument_n(argument_n),
        fix_string(fix_string) {};
};

const MathFuction MATH_FUNCTION_LIST[] = {
    MathFuction("+", add_fun, 2, "0"),
    MathFuction("-", sub_fun, 2, "0"),
    MathFuction("*", mul_fun, 2, "1"),
    MathFuction("/", div_fun, 2, "1"),
    MathFuction("sin", sin_fun, 1, "0"),
    MathFuction("cos", cos_fun, 1, "22 / 7"),
};
