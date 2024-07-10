# Tic-Tac-Toe Game
This project is a simple implementation of the classic game Tic-Tac-Toe in C++. It is designed to be played in a Windows console environment. The game supports two players taking turns to mark a space in a 3x3 grid. The player who succeeds in placing three of their marks in a horizontal, vertical, or diagonal row wins the game.

## Features

- Simple and intuitive text-based interface.
- Colorful console output for enhanced user experience.
- Checks for valid moves and prevents overwriting of spaces.
- Added the option to play against the computer.
- Enhanced colors and X O symbols for better visibility.

## Prerequisites

To run this game, you will need:

- A Windows operating system.
- A C++ compiler

## Compilation and Running

1. Open your command prompt or terminal.
2. Navigate to the directory containing the game files.
3. Compile the game using your C++ compiler. For example, if you are using GCC, you can compile the game with the following command:
   g++ -o TicTacToe main.cpp

## How to Play

- The game is played on a grid that's 3 squares by 3 squares.
- Players take turns putting their marks (O or X) in empty squares.
- The first player to get 3 of their marks in a row (up, down, across, or diagonally) is the winner.
- When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in a tie.

## Note

This game uses `SetConsoleTextAttribute` for coloring the console output, which is specific to the Windows Console. If you are compiling this game on a different platform, you might need to modify or remove the coloring functionality.

## Screenshots
![Screenshot 2024-07-10 111635](https://github.com/ahmadchughtai21/TicTacToe/assets/133879449/3466d8f4-5860-4ff7-b7a3-e754e25d314e)
![Screenshot 2024-07-10 112557](https://github.com/ahmadchughtai21/TicTacToe/assets/133879449/93883ac6-fb87-44a1-9318-577511401287)
![Screenshot 2024-07-10 112339](https://github.com/ahmadchughtai21/TicTacToe/assets/133879449/d922fec1-d78a-4aed-bdff-ca82bd346d09)

