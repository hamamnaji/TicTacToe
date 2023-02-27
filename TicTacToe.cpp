#include "TTT.h"

int main()
{
    TicTacToe ttt;
    int exit = 0;
    int p1;
    int p2;
    int no = 0;
    int chk = 0;
    int draa = 0;
    string yon;
    cout << "Welcome to the game of TicTacToe" << endl;
    cout << "To play select numbers 1 - 9 to place your X or O tile." << endl;
    cout << "Enjoy!\n\n\n" << endl;
    while (exit == 0) {

        while (no == 0) {
            //Player 1 Move
            while (chk == 0) {
                ttt.printTTT();
                cout << "\n\n\n\nPlayer one, choose a number: ";
                cin >> p1;
                if (ttt.badMove(p1 - 1) == false) {
                    ttt.placeX(p1 - 1);
                    chk = 1;
                    cout << "\n\n\n\n\n\n\n\n\n";
                }
                else {
                    cout << "\ninvalid number, try again (You cannot override a box which already has a X or O tile in it)." << endl << endl << endl;
                }
            }
            //check draw or win for player 1
            if (ttt.checkWin() == 1) {
                ttt.xWin();
                break;
            }
            if (ttt.checkDraw() == true) {
                draa = 1;
                break;
            }
            chk = 0;

            //Player 2 Move
            while (chk == 0) {
                ttt.printTTT();
                cout << "\n\n\n\nPlayer two, choose a number: ";
                cin >> p2;
                if (ttt.badMove(p2 - 1) == false) {
                    ttt.placeO(p2 - 1);
                    chk = 1;
                    cout << "\n\n\n\n\n\n\n\n\n";
                }
                else {
                    cout << "\ninvalid number, try again (You cannot override a box which already has a X or O tile in it)." << endl << endl << endl;
                }
            }

            //check draw or win for player 2
            if (ttt.checkWin() == 1) {
                ttt.oWin();
                break;
            }
            if (ttt.checkDraw() == true) {
                draa = 1;
                break;
            }
            
            chk = 0;

        }
        
        if (draa == 1) {
            cout << "\n\n\n\nThe game was a draw, would you like to play again? (y/n): ";
            cin >> yon;
        } 
        else{
            cout << "Would you like to try again? (y/n): ";
            cin >> yon;
        }
        
        if (yon == "y" || yon == "Y") {
            exit = 0;
            draa = 0;
            chk = 0;
            ttt.reset();
            cout << "\n\n\n\n\n\n\n\n\n";
        }
        else {
            exit = 1;
        }

    }

    cout << "\n\nFinal scores: " << endl;
    cout << "X won " << ttt.xScore() << " time(s)." << endl;
    cout << "O won " << ttt.oScore() << " time(s)." << endl;


}

