#include "TTT.h"

void TicTacToe::xWin()
{
	xS++;
}

void TicTacToe::oWin()
{
	oS++;
}

int TicTacToe::xScore()
{
	return xS;
}

int TicTacToe::yScore()
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
	for (int i = 0; i < 9; i++) {

		if (to_string(a) == boxes[i]) {

			boxes[i] == "X";
			return;
		}
	}

}

void TicTacToe::placeO(int a)
{
	for (int i = 0; i < 9; i++) {

		if (to_string(a) == boxes[i]) {

			boxes[i] == "O";
			return;
		}
	}
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
