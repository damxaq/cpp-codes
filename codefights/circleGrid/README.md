Calculate the number of points with integer coordinates that lie strictly inside the given circle on the xy-plane.

Example

For X = 3.9, Y = 2.35 and R = 2.4, the output should be

circleGrid(X, Y, R) = 18.

A circle of radius 2.4 with its mid point at (3.9, 2.35) covers 18 integer grid points as shown below:

image

Input/Output

[time limit] 500ms (cpp)
[input] float X

X coordinate of the circle's center.

Constraints:

-2000.0 ≤ X ≤ 2000.0.

[input] float Y

Y coordinate of the circle's center.

Constraints:

-2000.0 ≤ Y ≤ 2000.0.

[input] float R

Radius of the circle.

Constraints:

0.0 ≤ R ≤ 250.0.

[output] integer

The number of points with integer coordinates that lie within the given circle.
