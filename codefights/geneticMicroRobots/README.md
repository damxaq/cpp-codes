Siavash is writing algorithms for micro-robots that perform some manipulations on the given DNA sequences. The current robot should be able to do the following:

For each DNA sequence in the given list of sequences of length n the robot should:

replace each part of the sequence with its peer ('A' with 'T' and vice versa, and 'C' with 'G' and vice versa);
reverse the sequence.
Implement the function with which the robot should be programmed.

Example

For n = 2 and sequences = ["AGCT", "AG"], the output should be
geneticMicroRobots(n, sequences) = ["AGCT", "CT"].

"AGCT" should be turned into "TCGA" and then back to "AGCT" again.
"AG" should be turned into "TC" and then to "CT".

Input/Output

[time limit] 500ms (cpp)
[input] integer n

The number of sequences the micro-bot should fix.

Constraints:
1 ≤ n ≤ 100.

[input] array.string sequences

Array of strings, where each string consists of letters 'A', 'G', 'C' and 'T' only.

Constraints:
sequences.length = n,
1 ≤ sequences[i].length ≤ 100.

[output] array.string

Array of length n, the modified sequences in the order they were given.
