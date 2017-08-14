Emirp is prime spelled backwards.

A number is emirp if both the number itself and the same number written backwards are prime. For instance, 13 and 31 are emirps, but 23 is not, since 32 is a composite number.

Emirps are hiding in a large integer num, waiting for the next skilled programmer to find them! They are clustered together, so an emirp can be formed from a set of consecutive digits of num.

Find the sum of all emirps in num. If none can be found, return -1 instead.

Example

For num = 13211, the output should be

emirpMinion(num) = 1350.

In this example, 13, 3, 2, 1321, and 11 are the only emirps, and their sum is 13 + 3 + 2 + 11 + 1321 = 1350.

Input/Output

[time limit] 500ms (cpp)
[input] integer num

Large integer where emirps are hiding.

Constraints:

10 ≤ num ≤ 2 · 109.

[output] integer

Sum of all emirps found in the large integer num.
