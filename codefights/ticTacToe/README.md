Given a tic-tac-toe board state, check whether it's possible to get it by playing by rules.

Example:

For

board = [['o','o','x'],
         ['x','o','o'],
         [' ',' ','x']]
the answer is TicTacToe(board) = false.
There're four 'o' symbols and only three 'x's, which is impossible since 'x' starts the game.

[time limit] 500ms (cpp)
[input] array.array.char board

A 3 × 3 matrix, the current board state. 'o's denote the second player's moves, 'x's denote the first player's moves, and ' ' denote empty cells.

[output] boolean

true if the current board state is possible, false otherwise.
