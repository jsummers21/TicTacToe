/*
Name: Jared Summers
Program: Tic Tac Toe
Desc: Plays the game tic tac toe and displays the winner
*/


#include "stdafx.h"
#include <iostream>
using namespace std;

const int INT_ROWS = 3;
const int INT_COLUMNS = 3;

void printBoard(char arySeats[][INT_COLUMNS], int intRows) {
	for (int intRow = 0; intRow < intRows; intRow++) {
		for (int intColumn = 0; intColumn < INT_COLUMNS; intColumn++) {
			cout << " ";
			cout << arySeats[intRow][intColumn];
		}
		cout << endl;
	}
}

int clearBoard(char aryBoard[][INT_COLUMNS], int intRows) {
	for (int intRow = 0; intRow < intRows; intRow++) {
		for (int intColumn = 0; intColumn < INT_COLUMNS; intColumn++) {

			aryBoard[intRow][intColumn] = '-';
		}
	}
	return 0;
}

void fillBoardX(char aryBoard[][INT_COLUMNS], int intRows, int intRow, int intColumn) {
	
	aryBoard[intRow][intColumn] = 'X';
}

void fillBoardO(char aryBoard[][INT_COLUMNS], int intRows, int intRow, int intColumn) {

	aryBoard[intRow][intColumn] = 'O';
}

void TeamX(char aryBoard[][INT_COLUMNS],int intXRows , int intXCollumns) {
	if (intXRows = 1, intXCollumns = 1) {
		fillBoardX(aryBoard, INT_ROWS, 0, 0);
	}
	
}



int main()
{
	char aryBoard[INT_ROWS][INT_COLUMNS];
	int intXRows;
	int intXCollumns;

	clearBoard(aryBoard, INT_ROWS);
	printBoard(aryBoard, INT_ROWS);
	

	
	


	return 0;
}