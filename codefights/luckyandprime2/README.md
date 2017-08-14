He introduced a new concept called primacity. He explains that the primacity of an integer is the number of distinct primes which divide it.

Bunny asked Lucky the following quesition: how many integers in the range [l, r] have a primacity of exactly k? Your task is to help Lucky answer this question.

Example

For l = 5, r = 15 and k = 2, the output should be

luckyandprime2(l, r, k) = 5.

There're 5 integers with primacity 2 in the range [5, 15], which are: 6, 10, 12, 14 and 15.

Input/Output

[time limit] 500ms (cpp)
[input] integer l

Constraints:

1 ≤ l ≤ r.

[input] integer r

Constraints:

l ≤ r ≤ 104.

[input] integer k

Constraints:

1 ≤ k ≤ 5.

[output] integer

The number of integers in the range [l, r] of primacity k.
