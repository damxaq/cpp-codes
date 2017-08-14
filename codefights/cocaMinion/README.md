CocaMinion is a minion who is very fond of Coke. He once went to a store with some dollars to buy his favourite beverage Coca Cola. The shop sells coke in two types of bottles: plastic and glass, each containing the same amount of coke. Each plastic bottle costs plasticCost, and each glass one costs glassCost. However, there're only glassCnt glass bottles (the number of plastic bottles is close to infinity, so CocaMinion didn't bother to count them).

What's the maximum number of bottles CocaMinion can buy?

Example

For dollars = 9, plasticCost = 2, glassCost = 4 and glassCnt = 1,

the output should be

CocaMinion(dollars, plasticCost, glassCost, glassCnt) = 4.

Plastic bottles cost less than glass ones, so CocaMinion can spend all his money to buy 4 bottles.

For dollars = 9, plasticCost = 4, glassCost = 3 and glassCnt = 5,

the output should be

CocaMinion(dollars, plasticCost, glassCost, glassCnt) = 3.

CocoMinion can buy 3 glass bottles with all his money.

For dollars = 9, plasticCost = 5, glassCost = 2 and glassCnt = 2,

the output should be

CocaMinion(dollars, plasticCost, glassCost, glassCnt) = 3.

CocoMinion can buy both glass bottles for 2 dollars each and one plastic bottle for 5 dollars.

Input/Output

[time limit] 500ms (cpp)
[input] integer dollars

Number of Dollars CocaMinion has.

Constraints:

1 ≤ dollars ≤ 109.

[input] integer plasticCost

Price of each plastic bottle.

Constraints:

1 ≤ plasticCost ≤ 109.

[input] integer glassCost

Price of each glass bottle.

Constraints:

1 ≤ glassCost ≤ 109.

[input] integer glassCnt

The number of glass bottles.

Constraints:

1 ≤ glassCnt ≤ 109.

[output] integer

The maximum number of Bottles CocaMinion can buy.
