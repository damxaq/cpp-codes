A pronic number (also known as oblong number, rectangular number or heteromecic number), is a number which is the product of two consecutive integers, i.e. it can be represented as x * (x + 1) for some integer x. The first few pronic numbers are:

0, 2, 6, 12, 20, 30, 42...
Here's why:

0 = 0 × 1
2 = 1 × 2
6 = 2 × 3
12 = 3 × 4
20 = 4 × 5
30 = 5 × 6
42 = 6 × 7
Your task is to write a function isPronic which checks whether the number n is a pronic number and returns true if it is and false otherwise.

Example

For n = 0, the output should be

isPronic(n) = true.

For n = 1, the output should be

isPronic(n) = false.

Input/Output

[time limit] 500ms (cpp)
[input] integer n

Constraints:

0 ≤ n ≤ 225.

[output] boolean

true if n is a pronic number, false otherwise.
