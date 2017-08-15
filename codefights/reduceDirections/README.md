Who doesn't want 2000 Coins, Huh?

You being a smartass coder, immediately saw that going "NORTH" and then "SOUTH" is not reasonable, better stay put! Similarly going "EAST" and then "WEST" is a waste of time. Hence, the directions given in the poster can be simplified in two steps as shown below:

Step 1: Remove the following pair of opposite directions:

directions = [ <"NORTH", "SOUTH">, 
              "SOUTH",  <"EAST", "WEST">, 
              "NORTH",  <"WEST", "EAST">, 
              "NORTH", "WEST", "SOUTH", 
              "EAST", <"NORTH", "SOUTH">, 
              <"EAST", "WEST">, "NORTH", 
              "NORTH", "WEST"]
Step 2: Remove the following pair of opposite directions:

directions = [ <"SOUTH", "NORTH">, "NORTH", 
              "WEST", "SOUTH", "EAST", 
              "NORTH", "NORTH", "WEST"]
The resulting path cannot be further simplified. Hence, the shorter version of the directions given in the poster would be ["NORTH", "WEST", "SOUTH", "EAST", "NORTH", "NORTH", "WEST"].

Your task is to create a simplified version of the given directions to get the desired 2000 coins.

Example

For

directions = ["NORTH", 
              "SOUTH", 
              "SOUTH", 
              "EAST", 
              "WEST", 
              "NORTH", 
              "WEST"]
the output should be

ReduceDirections(directions) = ["WEST"].

For

directions = ["NORTH", 
              "SOUTH", 
              "SOUTH", 
              "EAST", 
              "WEST", 
              "NORTH"
the output should be

ReduceDirections(directions) = [].

Input/Output

[time limit] 500ms (cpp)
[input] array.string directions

An array consisting of directions, where each direction is one of the following: "NORTH", "SOUTH", "EAST" or "WEST".

Constraints:

5 ≤ directions.length ≤ 30.

[output] array.string

A simplified version of the given directions.
