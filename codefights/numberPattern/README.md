You are given array n. Let's say that m is a pattern of n, if its elements have the format "+a" or "-a" for some a ≥ 0, and for each 0 ≤ i < n.length - 1 n[i + 1] = n[i] <m[i % m.length]>.

To put it less formal, for the given array n its pattern is an array of differences between every two consecutive elements of n. The pattern can be shortened if these differences repeat with some period.

Find the smallest (in terms of length) pattern of n.

Example

For n = [1, 2, 3], the output should be
NumberPattern(n) = ["+1"].
The pattern of n can be written as ["+1", "+1"], which can be shortened to ["1"].
For n = [1, 1, 1], the output should be
NumberPattern(n) = ["+0"].
Note that 0 should be written with the "+" character.
For n = [1,2,3,2], the output should be
NumberPattern(n) = ["+1","+1","-1"].
The pattern of n can be written as ["+1","+1","-1"], because:
n[1] = n[0] <m[i % 3]> = n[1] "+ 1";
n[2] = n[1] <m[i % 3]> = n[2] "+ 1";
n[3] = n[2] <m[i % 3]> = n[2] "- 1".
[time limit] 500ms (cpp)
[input] array.integer n

2 ≤ n.length ≤ 50
-1000 ≤ n[i] ≤ 1000

[output] array.string

The smallest pattern of n.
