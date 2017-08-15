Colors on the web may be specified as an RGB triplet or in hexadecimal format (a hex triplet). They may also be specified according to their common English names in some cases; however, web developers who want to get even more precise with their color choices can use hexadecimal and RGB color values.

Hexadecimal color (#RRGGBB): Hexadecimal values that represent mixtures of red, green and blue. For example, red can be expressed with the hexadecimal value of #FF0000: the value FF represents red, 00 represents green, and 00 represents blue. However Sometimes in CSS, Shorthand Hexadecimal color - an abbreviated, three (hexadecimal)-digit form is used. Expanding this form to the six-digit form is as simple as doubling each digit: #09C becomes #0099CC.

RGB (Red, Green, Blue) colors: Color created by three numbers representing red, green, and blue. When mixed together, the three values create a specific color. For example purple can be represented as rgb(128, 0, 128).

Your task is to write a function which takes RGB values as an array and returns it's Hexadecimal form as a string. The returned string should be a valid Hexadecimal color or, if possible, a Shorthand Hexadecimal Color.

Example

For rgb = [255, 69, 0], the output should be

RGBtoHex(rgb) = "#FF4500".

Note the leading zero that appeared in the blue component.

For rgb = [255, 255, 255], the output should be

RGBtoHex(rgb) = "#FFF".

The Hexadecimal is "#FFFFFF", which can be shortened to "#FFF".

Input/Output

[time limit] 500ms (cpp)
[input] array.integer rgb

RGB Color as a triplet.

Constraints:

rgb.length = 3,

0 ≤ rgb[i] ≤ 255.

[output] string

Hexadecimal Color (Shorthanded, if possible).


