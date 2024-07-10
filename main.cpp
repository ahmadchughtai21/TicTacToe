#include <iostream>
#include <windows.h>
using namespace std;

HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

void board();
bool check_place(int m);

int a = 2, b = 3, c = 4, d = 5, e = 6, f = 7, g = 8, h = 9, i = 10;
bool first = true;

// winning logics
void check_win()
{
    // Player 1 Wins!
    if (a == 0 && b == 0 && c == 0)
    {
        cout << "Player 1 wins!" << endl;
        exit(0);
    }
    else if (d == 0 && e == 0 && f == 0)
    {
        cout << "Player 1 wins!" << endl;
        exit(0);
    }
    else if (g == 0 && h == 0 && i == 0)
    {
        cout << "Player 1 wins!" << endl;
        exit(0);
    }
    else if (a == 0 && d == 0 && g == 0)
    {
        cout << "Player 1 wins!" << endl;
        exit(0);
    }
    else if (b == 0 && e == 0 && h == 0)
    {
        cout << "Player 1 wins!" << endl;
        exit(0);
    }
    else if (c == 0 && f == 0 && i == 0)
    {
        cout << "Player 1 wins!" << endl;
        exit(0);
    }
    else if (a == 0 && e == 0 && i == 0)
    {
        cout << "Player 1 wins!" << endl;
        exit(0);
    }
    else if (c == 0 && e == 0 && g == 0)
    {
        cout << "Player 1 wins!" << endl;
        exit(0);
    }

    // Player 2 wins
    if (a == 0 && b == 0 && c == 0)
    {
        cout << "Player 2 wins!" << endl;
        exit(0);
    }
    else if (d == 0 && e == 0 && f == 0)
    {
        cout << "Player 2 wins!" << endl;
        exit(0);
    }
    else if (g == 0 && h == 0 && i == 0)
    {
        cout << "Player  wins!" << endl;
        exit(0);
    }
    else if (a == 0 && d == 0 && g == 0)
    {
        cout << "Player 2 wins!" << endl;
        exit(0);
    }
    else if (b == 0 && e == 0 && h == 0)
    {
        cout << "Player 2 wins!" << endl;
        exit(0);
    }
    else if (c == 0 && f == 0 && i == 0)
    {
        cout << "Player 2 wins!" << endl;
        exit(0);
    }
    else if (a == 0 && e == 0 && i == 0)
    {
        cout << "Player 2 wins!" << endl;
        exit(0);
    }
    else if (c == 0 && e == 0 && g == 0)
    {
        cout << "Player 2 wins!" << endl;
        exit(0);
    }

    // Draw
    if (a != 2 && b != 3 && c != 4 && d != 5 && e != 6 && f != 7 && g != 8 && h != 9 && i != 10)
    {
        cout << "Draw!" << endl;
        exit(0);
    }
}

void board()
{
    SetConsoleTextAttribute(color, 12);
    cout << "         |          |          " << endl;
    cout << "    " << a << "    |    " << b << "     |     " << c << "    " << endl;
    cout << "         |          |          " << endl;
    cout << "---------|----------|----------" << endl;
    cout << "         |          |          " << endl;
    cout << "    " << d << "    |    " << e << "     |     " << f << "    " << endl;
    cout << "         |          |          " << endl;
    cout << "---------|----------|----------" << endl;
    cout << "         |          |          " << endl;
    cout << "    " << g << "    |    " << h << "     |     " << i << "    " << endl;
    cout << "         |          |          " << endl;
    SetConsoleTextAttribute(color, 15);
}

bool check_place(int m)
{
    if (m < 2 || m > 10)
    {
        return false;
    }

    switch (m)
    {
    case 2:
        if (a == -1 || a == 1)
            return false;
        break;
    case 3:
        if (b == -1 || b == 1)
            return false;
        break;
    case 4:
        if (c == -1 || c == 1)
            return false;
        break;
    case 5:
        if (d == -1 || d == 1)
            return false;
        break;
    case 6:
        if (e == -1 || e == 1)
            return false;
        break;
    case 7:
        if (f == -1 || f == 1)
            return false;
        break;
    case 8:
        if (g == -1 || g == 1)
            return false;
        break;
    case 9:
        if (h == -1 || h == 1)
            return false;
        break;
    case 10:
        if (i == -1 || i == 1)
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
        cout << "Enter Position to Place 0 :";
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
    case 2:
        a = 0;
        break;
    case 3:
        b = 0;
        break;
    case 4:
        c = 0;
        break;
    case 5:
        d = 0;
        break;
    case 6:
        e = 0;
        break;
    case 7:
        f = 0;
        break;
    case 8:
        g = 0;
        break;
    case 9:
        h = 0;
        break;
    case 10:
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
        cout << "Enter Position to Place 1 :";
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
    case 2:
        a = 1;
        break;
    case 3:
        b = 1;
        break;
    case 4:
        c = 1;
        break;
    case 5:
        d = 1;
        break;
    case 6:
        e = 1;
        break;
    case 7:
        f = 1;
        break;
    case 8:
        g = 1;
        break;
    case 9:
        h = 1;
        break;
    case 10:
        i = 1;
        break;
    }
    cout << "Successful!" << endl;
    board();
    check_win();
}

int main()
{
    SetConsoleTextAttribute(color, 9);
    cout << "Player 1 is 0!" << endl;
    cout << "Player 2 is 1!" << endl;
    SetConsoleTextAttribute(color, 15);
    board();
    while (true)
    {
        p1_turn();
        p2_turn();
    }
    return 0;
}
