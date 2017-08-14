Have you ever looked at the nutrition facts to see how many calories the food contains? Here's what you can find out if you take a look:

Carbohydrates give you 4 calories per gram.
Fat has 9 calories per gram.
Protein has 4 calories per gram.
Given the number of grams of carbohydrates, fat, and protein in a serving of an arbitrary food item, and given the maximum number of calories maxCalories you should intake in a day, figure out how many full servings you can eat.

It is guaranteed that the food can give you at least a bit nutritious.

Example

For carbohydrates = 3, fat = 2, protein = 6 and maxCalories = 300,

the output should be

simpleNutritionCalc(carbohydrates, fat, protein, maxCalories = 5.

In this example, a serving has 3 grams carbohydrates, 2 grams fat, and 6 grams protein. You are allowed to eat 300 calories at most.

There're 3 * 4 + 2 * 9 + 6 * 4 = 54 calories in one serving, so you can eat 300 / 54 = 5.555555 --> 5 servings a day.

Input/Output

[time limit] 500ms (cpp)
[input] integer carbohydrates

The number of grams of carbohydrates.

Constraints:

0 ≤ carbohydrates ≤ 106.

[input] integer fat

The number of grams of fat.

Constraints:

0 ≤ fat ≤ 106.

[input] integer protein

The number of grams of protein.

Constraints:

0 ≤ protein ≤ 106.

[input] integer maxCalories

The maximum number of calories you can eat.

Constraints:

0 ≤ maxCalories ≤ 2 · 109.

[output] integer

The number of servings of food you can eat.
