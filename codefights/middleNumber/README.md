Given two numbers n and m, find their digital average.

The digital average can be calculated only if all digits in their sum are even. To obtain the digital average, each digit of this sum should be divided by 2.

If the digital average cannot be calculated, return -1 instead.

Example

For n = 273 and m = 415, the output should be

middleNumber(n, m) = 344.

n + m = 688. 6 / 2 = 3, and 8 / 2 = 4. Thus, the answer is 344.

This is my first challenge. Please have fun!

[time limit] 500ms (cpp)
[input] integer n

Constraints:

1 ≤ n ≤ 500.

[input] integer m

Constraints:

1 ≤ m ≤ 500.

[output] integer

An integer value which is a middle number of the two given integer else -1 is returned.
