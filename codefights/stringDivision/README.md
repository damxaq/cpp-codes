Given a string s, perform the following algorithm:

Replace every letter with its 1-based position in the alphabet;
Divide the obtained thus number by two, and round the result down to the nearest integer;
Replace every digit in the obtained number with the letter at the corresponding 0-based position in the alphabet;
Return the resulting string.
Example

For s = "abcde", the output should be

stringDivision(s) = "gbhc"

Here're the results obtained at each step of the algorithm:

"abcde" is changed to 12345;
12345 becomes 12345 / 2 = 6172;
6172 turns into "gbhc";
"gbhc" is returned.
Input/Output

[time limit] 500ms (cpp)
[input] string s

A string of lowercase Latin letters.

Constraints:

1 ≤ s.length ≤ 35.

[output] string

Result of the above described algorithm.
