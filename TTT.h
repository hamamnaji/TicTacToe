#pragma once
using namespace std;
#include <iostream>
class TicTacToe{

private:

	int xS;
	int oS;
	string one, two, three, four, five, six, seven, eight, nine;




public:

	void xWin();
	void oWin();
	int xScore();
	int yScore();
	TicTacToe();
	void printTTT();


};