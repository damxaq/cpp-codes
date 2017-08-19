Given a number n, return a string representing it as a sum of distinct powers of three, or return "Impossible" if that's not possible to achieve.

Example:

sumOfThrees("4") = "3^1+3^0".
4 can be represented as 3+1 which is in fact 3 to the power of 1 plus 3 to the power of 0
sumOfThrees("2") = "Impossible"
There is no way to represent 2 as a sum of distinct powers of 3.
Input/Output

[time limit] 500ms (cpp)
[input] string n

A string representing the number n. It is guaranteed that 1 ≤ n ≤ 9 × 1016.

[output] string

A string representing the sum of powers of three which adds up to n, or "Impossible" if there is no solution. If the solution does exist, it should be return as "3^a1+3^a2+ ... +3^an", where ai for 0 ≤ i ≤ n represents the corresponding exponent of the term. The terms in the string should also be sorted in descending order, meaning that higher powers should appear before the lower ones in the string ("3^0+3^1" is incorrect, whereas "3^1+3^0" is correct).
