Test 1 has 25 questions. For each question, you get 0 points for an incorrect answer, a points for a correct answer, and b points for a blank answer.
Test 2 has 10 questions. For each question, you get 0 points for an incorrect or blank answer and c points for a correct answer.

The combined score of these two tests is calculated as <the score of test 1> + 10 * <the score of test 2>, where:

<the score of test 1> is the total number of points received for Test 1, i.e. a * <the number of correct answers> + b * <the number of blank answers>;
<the score of test 2> is the total number of points received for Test 2, i.e. c * <the number of correct answers>.
Given a, b, and c, calculate the number of all possible different combined scores a student can get.

Example
For a = 12, b = 3, and c = 2, the output should be
combinedScore(a, b, c) = 454.

For those who are curious, this challenge is based on the AMC and AIME.

[time limit] 500ms (cpp)
[input] integer a

Score for a correct answer on test 1. 0 ≤ a ≤ 100

[input] integer b

Score for a blank answer on test 1. 0 ≤ b ≤ 100

[input] integer c

Score for a correct answer on test 2. 0 ≤ c ≤ 100

[output] integer

The number of possible different combined scores.
