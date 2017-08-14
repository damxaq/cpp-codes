Let n be positive integer. Consider a set of first 2 * n positive integers:
T = {1; 2; 3; ...; 2 * n}.

Let a subset S of T be called nice if the absolute difference of each two elements in it is greater than n. More formally, it is true that ∀ a, b ∈ S, |a - b| > n.

Your task is to calculate the number of nice subsets of T for the given n.

Example

For n = 1, the output should be

niceSubsets(n) =3`.

There're 3 nice sets: {1}, {2} and ∅.

For n = 2, the output should be

niceSubsets(n) =6`.

Nice sets are ∅, {1}, {2}, {3}, {4} and {1;4}.

Input/Output

[time limit] 500ms (cpp)
[input] integer n

Constraints:

1 ≤ n ≤ 24.

[output] integer

The number of nice subsets of T.
