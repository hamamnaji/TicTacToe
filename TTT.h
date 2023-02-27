#pragma once
using namespace std;
#include <iostream>
class TicTacToe{

private:

	int xS;
	int oS;




public:

	void xWin();
	void oWin();
	int xScore();
	int yScore();
	TicTacToe();
	void printTTT();


};