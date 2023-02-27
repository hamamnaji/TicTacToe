#include "TTT.h"

void TicTacToe::xWin()
{
	cout << "\n\n\n\n";
	printTTT();
	cout << "\nPlayer one won!" << endl;
	xS++;
}

void TicTacToe::oWin()
{
	cout << "\n\n\n\n";
	printTTT();
	cout << "\nPlayer two won!" << endl;
	oS++;
}

int TicTacToe::xScore()
{
	return xS;
}

int TicTacToe::oScore()
{
	return oS;
}

TicTacToe::TicTacToe()
{

	xS = 0;
	oS = 0;
	boxes[0] = "1";
	boxes[1] = "2";
	boxes[2] = "3";
	boxes[3] = "4";
	boxes[4] = "5";
	boxes[5] = "6";
	boxes[6] = "7";
	boxes[7] = "8";
	boxes[8] = "9";

}

void TicTacToe::printTTT()
{

	cout << "              |              |              " << endl;
	cout << "              |              |              " << endl;
	cout << "      "<< boxes[0] <<"       |      "<< boxes[1] <<"       |       "<< boxes[2] <<"       " << endl;
	cout << "              |              |              " << endl;
	cout << "              |              |              " << endl;
	cout << "--------------------------------------------" << endl;
	cout << "              |              |              " << endl;
	cout << "              |              |              " << endl;
	cout << "      " << boxes[3] << "       |      " << boxes[4] << "       |       " << boxes[5] << "       " << endl;
	cout << "              |              |              " << endl;
	cout << "              |              |              " << endl;
	cout << "--------------------------------------------" << endl;
	cout << "              |              |              " << endl;
	cout << "              |              |              " << endl;
	cout << "      " << boxes[6] << "       |      " << boxes[7] << "       |       " << boxes[8] << "       " << endl;
	cout << "              |              |              " << endl;
	cout << "              |              |              " << endl;
	

}

void TicTacToe::placeX(int a)
{
	boxes[a] = "X";
}

void TicTacToe::placeO(int a)
{
	boxes[a] = "O";
}

bool TicTacToe::checkWin()
{

	if (boxes[0] == boxes[1] && boxes[2] == boxes[0] || boxes[3] == boxes[4] && boxes[5] == boxes[3] || boxes[6] == boxes[7] && boxes[8] == boxes[6]
		|| boxes[0] == boxes[3] && boxes[6] == boxes[0] || boxes[1] == boxes[4] && boxes[7] == boxes[1] || boxes[2] == boxes[5] && boxes[8] == boxes[2]
		|| boxes[0] == boxes[4] && boxes[8] == boxes[0] || boxes[2] == boxes[4] && boxes[6] == boxes[2]) {

		return true;
	}
	else {
		return false;
	}
}

bool TicTacToe::checkDraw()
{

	for (int i = 0; i < 9; i++) {

		if (boxes[i] != "X" || boxes[i] != "O") {
			return false;
		}

	}
	return true;
}

bool TicTacToe::badMove(int a)
{
	if (boxes[a] == "X" || boxes[a] == "O") {
		return true;
	}
	else {
		return false;
	}

}
