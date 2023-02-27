#pragma once
using namespace std;
#include <iostream>
#include <string>
class TicTacToe{

private:

	int xS;
	int oS;
	
	string boxes[9]{"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};


public:

	void xWin();
	void oWin();
	int xScore();
	int oScore();
	TicTacToe();
	void printTTT();
	void placeX(int a);
	void placeO(int a);
	bool checkWin();
	bool checkDraw();
	bool badMove(int a);

};