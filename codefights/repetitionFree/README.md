A repetition free number is one in which each digit in the range [1, 9] appears at most once and the digit 0 does not appear.

Here are a couple of examples of repetition free numbers: 23, 37, and 198.

Find the sum of the first n repetition free numbers. If the sum itself is repetition free, return that number; otherwise, find the smallest repetition free number greater than the sum and return it instead. If a repetition free number cannot be found, return -1.

Hint: the first repetition free number is 1.

Example

For n = 3, the output should be

repetitionFree(n) = 6.

1 + 2 + 3 = 6, which is also a repetition free number.

For n = 4, the output should be

repetitionFree(n) = 12.

1 + 2 + 3 + 4 = 10, which is not a repetition free number since it has a digit 0. The smallest repetition free number greater than 10 is 12.

Credits: CalState LA Progfest Competition for some aspects of this problem.

Input/Output

[time limit] 500ms (cpp)
[input] integer n

Constraints:

1 ≤ n ≤ 2 · 109.

[output] integer

The sum of the first n repetition free numbers, or the smallest repetition free number greater than this sum.
