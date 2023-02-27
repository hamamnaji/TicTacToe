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
	one = "1";
	two = "2";
	three = "3";
	four = "4";
	five = "5";
	six = "6";
	seven = "7";
	eight = "8";
	nine = "9";

}

void TicTacToe::printTTT()
{

	cout << "              |              |              " << endl;
	cout << "              |              |              " << endl;
	cout << "      "<< one <<"       |      "<< two <<"       |       "<< three <<"       " << endl;
	cout << "              |              |              " << endl;
	cout << "              |              |              " << endl;
	cout << "--------------------------------------------" << endl;
	cout << "              |              |              " << endl;
	cout << "              |              |              " << endl;
	cout << "      " << four << "       |      " << five << "       |       " << six << "       " << endl;
	cout << "              |              |              " << endl;
	cout << "              |              |              " << endl;
	cout << "--------------------------------------------" << endl;
	cout << "              |              |              " << endl;
	cout << "              |              |              " << endl;
	cout << "      " << seven << "       |      " << eight << "       |       " << nine << "       " << endl;
	cout << "              |              |              " << endl;
	cout << "              |              |              " << endl;
	

}
