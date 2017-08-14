In this challenge, given an integer n, your task is to write all the numbers from 0 to 2n - 1, so that for each two successive values their binary form differ in only one bit.

Concatenate the values in a string and return this string.

Example

For n = 3, the output should be

grayCode(n) = "01326754".

Here's how the string was obtained:

decimal binary
   0     0000
   1     0001
   3     0011
   2     0010
   6     0110
   7     0111
   5     0101
   4     0100
Note, that in binary notation each two consecutive values differ only in one digit.

Input/Output

[time limit] 500ms (cpp)
[input] integer n

Constraints:

1 ≤ n ≤ 13.

[output] string

A string of concatenated numbers.
