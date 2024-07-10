#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

void board();
bool check_place(int m);
void play_again();
int main();

int a = 1, b = 2, c = 3, d = 4, e = 5, f = 6, g = 7, h = 8, i = 9;

// winning logics
void check_win()
{
    // Player 1 Wins!
    if (a == 0 && b == 0 && c == 0)
    {
        cout << "Player 1 wins!" << endl;
        play_again();
    }
    else if (d == 0 && e == 0 && f == 0)
    {
        cout << "Player 1 wins!" << endl;
        play_again();
    }
    else if (g == 0 && h == 0 && i == 0)
    {
        cout << "Player 1 wins!" << endl;
        play_again();
    }
    else if (a == 0 && d == 0 && g == 0)
    {
        cout << "Player 1 wins!" << endl;
        play_again();
    }
    else if (b == 0 && e == 0 && h == 0)
    {
        cout << "Player 1 wins!" << endl;
        play_again();
    }
    else if (c == 0 && f == 0 && i == 0)
    {
        cout << "Player 1 wins!" << endl;
        play_again();
    }
    else if (a == 0 && e == 0 && i == 0)
    {
        cout << "Player 1 wins!" << endl;
        play_again();
    }
    else if (c == 0 && e == 0 && g == 0)
    {
        cout << "Player 1 wins!" << endl;
        play_again();
    }

    // Player 2 wins
    if (a == -1 && b == -1 && c == -1)
    {
        cout << "Player 2 wins!" << endl;
        play_again();
    }
    else if (d == -1 && e == -1 && f == -1)
    {
        cout << "Player 2 wins!" << endl;
        play_again();
    }
    else if (g == -1 && h == -1 && i == -1)
    {
        cout << "Player 2 wins!" << endl;
        play_again();
    }
    else if (a == -1 && d == -1 && g == -1)
    {
        cout << "Player 2 wins!" << endl;
        play_again();
    }
    else if (b == -1 && e == -1 && h == -1)
    {
        cout << "Player 2 wins!" << endl;
        play_again();
    }
    else if (c == -1 && f == -1 && i == -1)
    {
        cout << "Player 2 wins!" << endl;
        play_again();
    }
    else if (a == -1 && e == -1 && i == -1)
    {
        cout << "Player 2 wins!" << endl;
        play_again();
    }
    else if (c == -1 && e == -1 && g == -1)
    {
        cout << "Player 2 wins!" << endl;
        play_again();
    }

    // Draw
    if (a != 1 && b != 2 && c != 3 && d != 4 && e != 5 && f != 6 && g != 7 && h != 8 && i != 9)
    {
        cout << "Draw!" << endl;
        play_again();
    }
}

void board()
{
    SetConsoleTextAttribute(color, 12);
    cout << "         |          |          " << endl;
    cout << "    ";
    if (a == 0)
    {
        SetConsoleTextAttribute(color, 9);
        cout << "O";
        SetConsoleTextAttribute(color, 12);
    }
    else if (a == -1)
    {
        SetConsoleTextAttribute(color, 9);
        cout << "X";
        SetConsoleTextAttribute(color, 12);
    }
    else
    {
        cout << a;
    }
    cout << "    |    ";
    if (b == 0)
    {
        SetConsoleTextAttribute(color, 9);
        cout << "O";
        SetConsoleTextAttribute(color, 12);
    }
    else if (b == -1)
    {
        SetConsoleTextAttribute(color, 9);
        cout << "X";
        SetConsoleTextAttribute(color, 12);
    }
    else
    {
        cout << b;
    }
    cout << "     |     ";
    if (c == 0)
    {
        SetConsoleTextAttribute(color, 9);
        cout << "O";
        SetConsoleTextAttribute(color, 12);
    }
    else if (c == -1)
    {
        SetConsoleTextAttribute(color, 9);
        cout << "X";
        SetConsoleTextAttribute(color, 12);
    }
    else
    {
        cout << c;
    }
    cout << "    " << endl;
    cout << "         |          |          " << endl;
    cout << "---------|----------|----------" << endl;
    cout << "         |          |          " << endl;
    cout << "    ";
    if (d == 0)
    {
        SetConsoleTextAttribute(color, 9);
        cout << "O";
        SetConsoleTextAttribute(color, 12);
    }
    else if (d == -1)
    {
        SetConsoleTextAttribute(color, 9);
        cout << "X";
        SetConsoleTextAttribute(color, 12);
    }
    else
    {
        cout << d;
    }
    cout << "    |    ";
    if (e == 0)
    {
        SetConsoleTextAttribute(color, 9);
        cout << "O";
        SetConsoleTextAttribute(color, 12);
    }
    else if (e == -1)
    {
        SetConsoleTextAttribute(color, 9);
        cout << "X";
        SetConsoleTextAttribute(color, 12);
    }
    else
    {
        cout << e;
    }
    cout << "     |     ";
    if (f == 0)
    {
        SetConsoleTextAttribute(color, 9);
        cout << "O";
        SetConsoleTextAttribute(color, 12);
    }
    else if (f == -1)
    {
        SetConsoleTextAttribute(color, 9);
        cout << "X";
        SetConsoleTextAttribute(color, 12);
    }
    else
    {
        cout << f;
    }
    cout << "    " << endl;
    cout << "         |          |          " << endl;
    cout << "---------|----------|----------" << endl;
    cout << "         |          |          " << endl;
    cout << "    ";
    if (g == 0)
    {
        SetConsoleTextAttribute(color, 9);
        cout << "O";
        SetConsoleTextAttribute(color, 12);
    }
    else if (g == -1)
    {
        SetConsoleTextAttribute(color, 9);
        cout << "X";
        SetConsoleTextAttribute(color, 12);
    }
    else
    {
        cout << g;
    }
    cout << "    |    ";
    if (h == 0)
    {
        SetConsoleTextAttribute(color, 9);
        cout << "O";
        SetConsoleTextAttribute(color, 12);
    }
    else if (h == -1)
    {
        SetConsoleTextAttribute(color, 9);
        cout << "X";
        SetConsoleTextAttribute(color, 12);
    }
    else
    {
        cout << h;
    }
    cout << "     |     ";
    if (i == 0)
    {
        SetConsoleTextAttribute(color, 9);
        cout << "O";
        SetConsoleTextAttribute(color, 12);
    }
    else if (i == -1)
    {
        SetConsoleTextAttribute(color, 9);
        cout << "X";
        SetConsoleTextAttribute(color, 12);
    }
    else
    {
        cout << i;
    }
    cout << "    " << endl;
    cout << "         |          |          " << endl;
    SetConsoleTextAttribute(color, 15);
}

bool check_place(int m)
{
    if (m < 1 || m > 9)
    {
        return false;
    }

    switch (m)
    {
    case 1:
        if (a == -1 || a == 0)
            return false;
        break;
    case 2:
        if (b == -1 || b == 0)
            return false;
        break;
    case 3:
        if (c == -1 || c == 0)
            return false;
        break;
    case 4:
        if (d == -1 || d == 0)
            return false;
        break;
    case 5:
        if (e == -1 || e == 0)
            return false;
        break;
    case 6:
        if (f == -1 || f == 0)
            return false;
        break;
    case 7:
        if (g == -1 || g == 0)
            return false;
        break;
    case 8:
        if (h == -1 || h == 0)
            return false;
        break;
    case 9:
        if (i == -1 || i == 0)
            return false;
        break;
    }
    return true;
}

void p1_turn()
{
    int move;
    bool validMove = false;
    while (!validMove)
    {
        SetConsoleTextAttribute(color, 9);
        cout << "Player 1's turn!" << endl;
        cout << "Enter Position to Place O :";
        cin >> move;
        validMove = check_place(move);
        if (!validMove)
        {
            cout << "Invalid Move! Try Again" << endl;
            board();
        }
    }

    switch (move)
    {
    case 1:
        a = 0;
        break;
    case 2:
        b = 0;
        break;
    case 3:
        c = 0;
        break;
    case 4:
        d = 0;
        break;
    case 5:
        e = 0;
        break;
    case 6:
        f = 0;
        break;
    case 7:
        g = 0;
        break;
    case 8:
        h = 0;
        break;
    case 9:
        i = 0;
        break;
    }
    cout << "Successful!" << endl;
    board();
    check_win();
}

void p2_turn()
{
    int move;
    bool validMove = false;
    while (!validMove)
    {
        SetConsoleTextAttribute(color, 9);
        cout << "Player 2's turn!" << endl;
        cout << "Enter Position to Place X :";
        cin >> move;
        validMove = check_place(move);
        if (!validMove)
        {
            cout << "Invalid Move! Try Again" << endl;
            board();
        }
    }

    switch (move)
    {
    case 1:
        a = -1;
        break;
    case 2:
        b = -1;
        break;
    case 3:
        c = -1;
        break;
    case 4:
        d = -1;
        break;
    case 5:
        e = -1;
        break;
    case 6:
        f = -1;
        break;
    case 7:
        g = -1;
        break;
    case 8:
        h = -1;
        break;
    case 9:
        i = -1;
        break;
    }
    cout << "Successful!" << endl;
    board();
    check_win();
}
void p2_turn_comp()
{
    srand(time(0));
    int move;
    bool validMove = false;
    while (!validMove)
    {
        SetConsoleTextAttribute(color, 9);
        cout << "Player 2's turn!" << endl;
        move = rand() % 9 + 1;
        validMove = check_place(move);
        if (!validMove)
        {
            board();
        }
    }

    switch (move)
    {
    case 1:
        a = -1;
        break;
    case 2:
        b = -1;
        break;
    case 3:
        c = -1;
        break;
    case 4:
        d = -1;
        break;
    case 5:
        e = -1;
        break;
    case 6:
        f = -1;
        break;
    case 7:
        g = -1;
        break;
    case 8:
        h = -1;
        break;
    case 9:
        i = -1;
        break;
    }
    cout << "Successful!" << endl;
    board();
    check_win();
}

void play_again()
{
    cout << "Do you want to play again?" << endl;
    cout << "[1] Yes" << endl;
    cout << "[2] No" << endl;
    int choice;
    cout << "Enter Choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        a = 1, b = 2, c = 3, d = 4, e = 5, f = 6, g = 7, h = 8, i = 9;
        main();
        break;
    case 2:
        exit(0);
        break;
    default:
        cout << "Invalid Choice!" << endl;
        play_again();
    }
}

int main()
{
    cout << "[1] Player vs Player Mode" << endl;
    cout << "[2] Player vs Computer Mode" << endl;
    int mode;
    cout << "Enter Mode: ";
    cin >> mode;
    switch (mode)
    {
    case 1:
        cout << "Player vs Player Mode!" << endl;
        SetConsoleTextAttribute(color, 9);
        cout << "Player 1 is O!" << endl;
        cout << "Player 2 is X!" << endl;
        SetConsoleTextAttribute(color, 15);
        board();
        while (true)
        {
            p1_turn();
            p2_turn();
        }
    case 2:
        cout << "Player vs Computer Mode!" << endl;
        SetConsoleTextAttribute(color, 9);
        cout << "Player 1 is O!" << endl;
        cout << "Computer is X!" << endl;
        SetConsoleTextAttribute(color, 15);
        board();
        while (true)
        {
            p1_turn();
            p2_turn_comp();
        }
    default:
        cout << "Invalid Mode!" << endl;
        main();
    }
    return 0;
}
