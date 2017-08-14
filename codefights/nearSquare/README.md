You're given a positive integer n. Your task is to represent this number as a product of two positive integers a and b, such that a * b = n, a ≤ b, and the difference b - a is the smallest possible.

Return the answer as an array of two elements [a, b].

Example

For n = 10, the output should be

Near_Square(n) = [2, 5].

It's possible to write 10 in two ways: 2 * 5 = 10, or 1 * 10 = 10. The 2 * 5 = 10 representation has the smallest difference (b - a = 5 - 2 = 3), so the answer is [2, 5].

Input/Output

[time limit] 500ms (cpp)
[input] integer n

Constraints:

1 ≤ n ≤ 2 · 109.

[output] array.integer

Array of two elements, whose product equals n.
