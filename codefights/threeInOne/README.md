You are given an array arr. Calculate its average rounded down to the nearest integer, and apply operator to the obtained result and the second value.

Example:

ThreeInOne([1, 2, 3, 4, 5, 2, 8, 9], "/", 2) = 2

arr's average equals (1 + 2 + 3 + 4 + 5 + 2 + 8 + 9) / 8 = 4, so the answer is 4 / 2 = 2.

[time limit] 500ms (cpp)
[input] array.integer arr

A non-empty array of integers.

[input] char operator

An operator to apply. Possible operators are:
'+' (addition);
'-' (subtraction);
'*' ( multiplication);
'/' (integer division).
It is guaranteed that there're no divisions by zero in the test cases.

[input] integer second

The second value to apply operator to.

[output] integer

The result.
