Print out a pyramid with a symbol '*'. The arguments count and direction define how the pyramid should be drawn.

The pyramid should contain count rows, where the ith row (1-based) consists of i '*' characters.

If direction is true, the rows should be counted in top-down order, otherwise they should be counted from bottom to top.

Example

For count = 5 and direction = true, the output should be

printPyramid(count, direction) = ["*", 
                                  "**", 
                                  "***", 
                                  "****", 
                                  "*****"]
Input/Output

[time limit] 500ms (cpp)
[input] integer count

The hight of the pyramid.

Constraints:

3 ≤ count ≤ 50.

[input] boolean direction

Direction in which the rows should be counted, true for top-down and false for bottom-up.

[output] array.string

A pyramid built as described above.
