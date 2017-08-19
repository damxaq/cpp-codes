The derivative of a function measures the sensitivity to change of a quantity (a function value or dependent variable) which is determined by another quantity (the independent variable).

In this challenge you don't have to know all the details about how it is calculated. The only thing you need to know is this: if y = a * xb, then its derivative is calculated as y' = a * b * xb - 1.

You are given some function in the format "y=ax^b" where a and b are integers, and x is a variable denoted by some lowercase Latin letter. Calculate its derivative and return it as a string in format y'=Ax^B".

Example

For equation = "y=3x^2", the output should be
simpleDerivativeCalculator(equation) = "y'=6x^1".

For equation = "y=12t^3", the output should be
simpleDerivativeCalculator(equation) = "y'=36t^2".

[time limit] 500ms (cpp)
[input] string equation

An equation in the format described above.

[output] string

Derivative of the given equation.
