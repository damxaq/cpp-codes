You are given a positive integer n either as a number, or in the format "a^b", where a and b are positive integers (possibly with leading zeros).

Your task is to sum all digits in n. Repeat the process until you get a single digit and return it.

Example

tillsingle("4444") = 7
4444 => 4 + 4 + 4 + 4 = 16
16 => 1 + 6 = 7
tillsingle("2^9") = 8
29 = 512
512 => 5 + 1 + 2 = 8
[time limit] 500ms (cpp)
[input] string n

0 ≤ n ≤ 251

[output] integer

The resulting digit.
