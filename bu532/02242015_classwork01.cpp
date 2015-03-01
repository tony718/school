#include <iostream>
using namespace std;
int main(){

    char p1Choice, p2Choice;
    string ROCK = "Rock break Scissors\n";
    string PAPER = "Paper covers Rocks\n";
    string SCISSORS = "Scissors cut Paper\n";
    string P1WIN = "\n Player 1 Wins. ";
    string P2WIN = "\n Player 2 Wins. ";
    string DRAW = "\n Nobody Win\n";

    cout << " Rock, Paper, Scissors Game" << endl << endl;
    cout << " Player 1 (R, P, S) : ";
    cin >> p1Choice;
    cout << " Player 2 (R, P, S) : "; 
    cin >> p2Choice;

    if (p1Choice == 'R' || p1Choice == 'r'){
        if (p2Choice == 'R' || p2Choice == 'r')
            cout << DRAW;
        if (p2Choice == 'P' || p2Choice == 'p')
            cout << P2WIN << PAPER;
        if (p2Choice == 'S' || p2Choice == 's')
            cout << P1WIN << ROCK;
    }

    if (p1Choice == 'P' || p1Choice == 'p'){
        if (p2Choice == 'R' || p2Choice == 'r')
            cout << P1WIN << PAPER;
        if (p2Choice == 'P' || p2Choice =='p')
            cout << DRAW;
        if (p2Choice == 'S' || p2Choice =='s')
            cout << P2WIN << SCISSORS;
    }

    if (p1Choice == 'S' || p1Choice == 's'){
        if (p2Choice == 'R' || p2Choice =='r')
            cout << P2WIN << ROCK;
        if (p2Choice == 'P' || p2Choice =='p')
            cout << P1WIN << SCISSORS;
        if (p2Choice == 'S' || p2Choice =='s')
            cout << DRAW;
    }
    return 0;
}
