Given a multiple-digit number num, determine its true value by performing the following operations:

The digit at the ones' place should be multiplied by 1. The digit at the tens' place should be multiplied by 2. The digit at the hundreds' place should be multiplied by 3, and so on.
Sum the values obtained in the first step.
Repeat step 1 until the result becomes a one-digit number.
Example

For num = 234, the output should be

TrueValue(num) = 8.

The first iteration produces 4 * 1 +3 * 2 + 2 * 3 = 4 + 6 + 6 = 16. After the second iteration, the number becomes 6 * 1 + 1 * 2 = 6 + 2 = 8. Thus, its true value is 8.

Input/Output

[time limit] 500ms (cpp)
[input] integer num

Constraints:

10 ≤ num ≤ 2 · 109.

[output] integer

The true value of num.
