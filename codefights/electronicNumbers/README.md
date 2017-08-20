One April weekend Alice decided to use the identical matches to create some electronic numbers. The required numbers of matches for each digit are shown below:
Electronic_numbers

So, digits from 0 to 9 require 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 matches respectively.

You are given the number of matches that Alice currently has. What is the smallest number Alice can make by using all these matches?

Example

ElectronicNumbers(2) = 1
1 is the only number Alice can make.
ElectronicNumbers(5) = 2
Alice can make the following numbers using her matches: 2, 3, 5, 17. The smallest of them is 2, which is the answer.
[time limit] 500ms (cpp)
[input] integer n

The number of matches, which is greater than 1 and less than 50.

[output] integer

The smallest number Alice can make. It is guaranteed that the number has less than 9 digits.
It is also guaranteed that it is always possible to make at least one number.
