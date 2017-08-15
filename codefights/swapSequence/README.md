Given two strings, your task is to find out if there is a swap sequence that transforms the first string into the second string. A swap sequence is a sequence of strings, such that for each two consecutive string the one can be obtained from another after a swap of two characters in one of the strings.

Return true if a swap sequence exists and false otherwise.

Example

swapSequence("abcd", "dacb") = true.

There is a swap sequence that transforms "abcd" into "dacb". For example, this sequence can be: "abcd" -> "adcb" -> "dacb". First, you swap the characters 'b' and 'd', and after this, you swap the characters 'a and 'd'.

swapSequence("abcd","abab") = false

There is no swap sequence that transforms "abcd" into "abab".

Input/Output

[time limit] 500ms (cpp)
[input] string a

The first string, a string of lowercase English letters.

Constraints:

1 ≤ a.length ≤ 20.

[input] string b

The second string, a string of lowercase English letters.

Constraints:

b.length = a.length.

[output] boolean

true if there is a swap sequence, and false otherwise.
