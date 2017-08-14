The International Standard Book Number (ISBN) is a unique numeric commercial book identifier.

The ISBN is assigned to each edition and variation (except reprintings) of a book. For example, an e-book, a paperback and a hardcover edition of the same book would each have a different ISBN. The ISBN is 13 digits long if assigned on or after 1 January 2007, and 10 digits long if assigned before 2007.

Check out the link given above to read more about ISBN formats and their check digits.

You will be given an old ISBN-10 number with a wrong or absent check digit. Your mission is to calculate and fix it and return the fixed result along with ISBN-13 format.

The answer should thus be an array of two strings of the following formats:

["ISBN-10: x-xxx-xxxxx-x", "ISBN-13: xxx-x-xxx-xxxxx-x"].

Example

ISBN13("0-306-40615") = ["ISBN-10: 0-306-40615-2", "ISBN-13: 978-0-306-40615-7"].

ISBN13("0306406158") = ["ISBN-10: 0-306-40615-2", "ISBN-13: 978-0-306-40615-7"]

Input/Output

[time limit] 500ms (cpp)
[input] string number

A string containing 9 to 10 digits and hyphens.

Constraints:

9 ≤ number.length ≤ 15.

[output] array.string

Two ISBN numbers in the format ["ISBN-10: x-xxx-xxxxx-x", "ISBN-13: xxx-x-xxx-xxxxx-x"].
