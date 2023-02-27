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
}

void TicTacToe::printTTT()
{


	cout << "                                                " << endl;
	cout << "                |              |                " << endl;
	cout << "                |              |                " << endl;
	cout << "                |              |                " << endl;
	cout << "                |              |                " << endl;
	cout << "                |              |                " << endl;
	cout << "                |              |                " << endl;
	cout << "------------------------------------------------" << endl;
	cout << "                |              |                " << endl;
	cout << "                |              |                " << endl;
	cout << "                |              |                " << endl;
	cout << "                |              |                " << endl;
	cout << "                |              |                " << endl;
	cout << "                |              |                " << endl;
	cout << "------------------------------------------------" << endl;
	cout << "                |              |                " << endl;
	cout << "                |              |                " << endl;
	cout << "                |              |                " << endl;
	cout << "                |              |                " << endl;
	cout << "                |              |                " << endl;
	cout << "                |              |                " << endl;
	





}
