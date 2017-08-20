You are given a number N and a two-dimensional array signals, which contains N equal-sized arrays of 0s and 1s.

Return an array of the same length as the elements of N, such that its ith element is the one that appears most frequently at the ith position of signals' elements.

Example:

errorProcessing(3, [[1,1,0], [1,0,0], [0,1,1])) = [1,1,0]

At the 1st position there're two 1s and one 0, so in the 1st element of the resulting array is 1.
At the 2nd position there're two 1s and one 0, so in the 2nd element of the resulting array is 1.
At the 3rd position there're two 0s and one 1, so in the 3rd element of the resulting array is 0.

[time limit] 500ms (cpp)
[input] integer N

A positive odd number.

[input] array.array.integer signals

Array of N non-empty elements.

[output] array.integer

The resulting array.


