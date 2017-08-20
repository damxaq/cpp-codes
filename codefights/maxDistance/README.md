You are in a fuel depot, and there are exactly N cans of K liters of gasoline there. You have a car which has a K liters tank. Also, you can put a K liters can in your car's trunk. Your car consumes P liters of gasoline every 100 km.

You want to travel as far as possible, so you came up with the following solution: you fill up your car's tank and move the remaining cans as far as possible. You repeat the process until you can't move any further.

Find out how far you can go moving as described above.

Example

For N = 2, K = 3 and P = 10 the answer is
maxDistance(N, K, P) = 60.
You can fill up your tank with one can, put another one in your trunk and travel 100 / 10 * (2 * 3) = 60 km.
For N = 4, K = 3 and P = 10, the answer is
maxDistance(N, K, P) = 76.
To maximize your travel distance, you should fill up your tank and move the 3 remaining cans as far as possible from the fuel depot. After that, you should pick up both cans you moved and travel as far as possible.
[time limit] 500ms (cpp)
[input] integer N

The number of cans, 1 ≤ N ≤ 100.

[input] integer K

The capacity of a can and your car's trunk, 1 ≤ K ≤ 50.

[input] integer P

The car's fuel consumption per 100 km, 1 ≤ P ≤ 20.

[output] integer

The maximum distance from the fuel deport you can travel rounded down to the nearest integer.


