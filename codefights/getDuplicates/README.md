You need to figure out a way to find all duplicates in a list of numbers numberList provided to you, and return them in an array sorted in the order they appear in numberList.

Additional constraints for those who really like challenges:

you're not allowed to create more variables;
all operations should be done on the original list;
the run time should be linear.
Of course, you can choose to ignore these constraints and submit a solution but where is fun in that?

Example

For numberList = [1,2,1,1,3,2,4,6,5], the output should be

GetDuplicates(numberList) = [1,2].

[time limit] 500ms (cpp)
[input] array.integer numberList

List of numbers to check for duplicates.

Constraints:

0 ≤ numberList.length ≤ 150,

1 ≤ numberList[i] ≤ 4 · 105.

[output] array.integer

Array of duplicates in the order they appear.
