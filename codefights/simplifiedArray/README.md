You're given an array arr. Apply the following algorithm to it:

find intervals of consecutive prime numbers and consecutive non-prime numbers;
replace each such interval with the sum of numbers in it;
if the resulting array is different from the initial one, repeat the process;
otherwise return the resulting array.
Note: here non-prime numbers include 0, 1 and all negative numbers.

Example:

simplifiedArray([1, 2, 3, 5, 6, 4, 2, 3]) = [21, 5]
[1,2,3,5,6,4,2,3] --> [1, 2 + 3 + 5, 6 + 4, 2 + 3] --> [1, 10, 10, 5]
[1, 10, 10, 5] --> [1 + 10 + 10, 5] --> [21,5]
simplifiedArray([-3, 4, 5, 2, 0, -10]) = [1, 7, -10]
[time limit] 500ms (cpp)
[input] array.integer arr

A non-empty array.
1 ≤ |arr| ≤ 1000
abs(arr[i]) ≤ 10000

[output] array.integer

The resulting array.
