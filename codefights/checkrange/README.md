You're given an array of integers A and two integers a and b. Find the number of elements in the array such that a ≤ A[i] ≤ b, where i is the 0-based index of the element.

Example

For A = [2, 5, 6, 7, 1, 3, 4, 11, 56, 49], a = 1 and b = 7,
the output should be
checkrange(A, a, b) = 7.

For 0 ≤ i ≤ 6 it is true that 1 ≤ A[i] ≤ 7.

Input/Output

[time limit] 500ms (cpp)
[input] array.integer A

Constraints:
1 ≤ A.length < 8000,
-106 ≤ A[i] ≤ 106.

[input] integer a

Contraints:
-106 ≤ a ≤ b.

[input] integer b

Contraints:
a ≤ b ≤ 106.

[output] integer

The number of elements in A which are not smaller than a and not greater than b.
