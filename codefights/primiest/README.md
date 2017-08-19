Lets call a prime number the primiest if all of its digits are also prime.

You are given an integer k. Find the kth (1-based) primiest number. If k is invalid or the answer is greater than 104, return -1 instead.

Example

For k = 2, the output should be
Primiest(k) = 3.
The first primiest number is 2, and the second one is 3, so the answer is 3.
For k = 0, the output should be
Primiest(k) = -1.
k = 0 is an invalid value.
Input/Output

[time limit] 500ms (cpp)
[input] integer k

The number of the primiest number to find.
-70 ≤ k ≤ 70.

[output] integer

The kth primiest number, or -1 if k is invalid or the answer is greater than 104.
