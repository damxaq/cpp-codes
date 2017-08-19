You're given an equation that consists of numbers, parenthesis and operations '+' and '-'. But you don't want just to calculate it's result the way ordinary people do. You have your own rules of calculation!

Firstly, you remove all whitespaces from the equation (who needs them anyway)? Secondly, you calculate the sum of even digits in it. If there's a '-' symbol just before the digit, you consider it as a negative number. Thirdly, you calculate the sum of odd numbers, paying attention to the '-' symbols as well. Finally, you subtract the sum of the odd numbers from the sum of even numbers. The obtained result is the result of the equation.

Now you need to write a program that does this kind of calculation for you. Given an equation, calculate it's value with your very own algorithm.

Example

For equation = "(-100) + 100 - (-200) + 1", the output should be
SumtheDifference(equation) = -3.

there's only one even digit, which is -2;
odd digits sum up to -1 + 1 + 1 = 1;
their difference is -2 - 1 = -3.
For equation = "(-25) + (-75) + 50 - 40 - (22 + 2)", the output should be
SumtheDifference(equation) = -8.

even digits sum up to -2 - 4 + 2 + 2 + 2 = 0;
odd digits sum up to 5 - 7 + 5 + 5 = 8;
their difference is 0 - 8 = -8.
[time limit] 500ms (cpp)
[input] string equation

An equation (not necessarily correct) consisting of digits, parenthesis and operators '-' and '+'.
0 ≤ equation.length ≤ 100.

[output] integer

Result of the equation.
