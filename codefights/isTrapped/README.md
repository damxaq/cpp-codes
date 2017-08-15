You entered a room of size width × length, with floor covered with tiles. Currently you're standing at the top-right tile of the room. Is it possible to step on every tile exactly once and end up on the bottom-left tile?

Example

For width = "1" and height = "1", the output should be

IsTrapped(width, height) = true.

You're at the on the bottom-left tile already.

For width = "2" and height = "2", the output should be

IsTrapped(width, height) = false.

There's no way to get to the bottom-left tile with stepping on each tile exactly once.

Input/Output

[time limit] 500ms (cpp)
[input] string width

The width of the room as a string.

Constraints:

1 ≤ width ≤ 1015.

[input] string length

The length of the room as a string.

Contraints:

1 ≤ length ≤ 1015.

[output] boolean

Return true if it's possible to move to the bottom-left tile stepping on each tile once, and false otherwise.
