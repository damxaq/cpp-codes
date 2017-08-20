Given an array roots containing the roots of a polynomial that has only integer roots, does not have double roots, and has a leading coefficient of 1, return an array containing the coefficients of the polynomial started from the coefficient of highest degree (1) and sorted in descending order of the corresponding degrees.

Example
For roots = [2, -3, 4], the output should be
vietasFormulas(roots) = [1, -3, -10, 24].

The polynomial would thus be (x - 2)(x + 3)(x - 4) = x3 - 3x2 - 10x + 24.

[time limit] 500ms (cpp)
[input] array.integer roots

All roots of the polynomial; 1 < r.length ≤ 10

[output] array.integer

Coefficients of the polynomial, started from the one corresponding to the greatest degree.
