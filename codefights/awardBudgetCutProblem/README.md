The awards committee had originally planned to distribute several research grants with money from its total yearly budget. However, after the latest board meeting, the committee's budget was reduced to budget dollars, and now it may be impossible to disburse all of the requested grants.

The committee members have decided to provide all grants by applying a maximum cap on them: every grant that is higher than some value c will now be c instead.

Help the committee to choose the right value of c that will make the total sum of grants equal to the new budget. No need to count your pennies though: if the answer turns out to be a non-integer, round it down to the nearest integer.

If it is possible to give all grants without setting the cap, return -1 instead.

Example

For grants = [100, 80, 20, 300] and budget = 400,

the output should be

awardBudgetCutProblem(grants, budget) = 200.

There's not enough money to give out all the grants, but the 200 dollar cap will lower the last grant down to 200, so the total sum spent will be 100 + 80 + 20 + 200 = 400.

For grants = [80, 150, 40, 255] and budget = 1000,

the output should be

awardBudgetCutProblem(grants, budget) = -1.

In this case there's enough money for all the grants.

Input/Output

[time limit] 500ms (cpp)
[input] array.integer grants

Requested grants.

Constraints:

3 ≤ grants.length ≤ 100,

1 ≤ grants[i] ≤ 1000.

[input] integer budget

The value of the reduced budget.

Constraints:

200 ≤ budget ≤ 105

[output] integer

The cap c to be applied.
