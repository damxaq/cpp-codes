Consider a sequence a1, a2, ..., an, such that:

a1 = 1 
sequence is increasing (ak > ak-1 for each k > 1)
ak – ak-1 > ak-1 – ak-2 for each k > 2
each positive integer occurs either in the sequence, or in the differences of some two consecutive elements of the sequence (but NOT in both)
So, a = {1, 3, 7, 12, 18, ​​26, 35, 45, ...}, and the differences are {2, 4, 5, 6, 8, 9, 10, ...}.

These two sequences are disjoint and cover the multitude of positive integers.

Given a positive integer n, return an.

Example

Hof(1) = 1
Hof(2) = 3
Hof(5) = 18
Input/Output

[time limit] 500ms (cpp)
[input] integer n

Constraints:

1 ≤ n ≤ 108.

[output] string

The value of an.
