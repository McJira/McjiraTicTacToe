#include "Player.h"
#include <array>
#include <iostream>
using namespace std;

void displayBoard(char board[3][3]) {
	cout << board[0][0]<<"|"<<board[0][1]<<"|"<<board[0][2] << endl;
	cout << "-----" << endl;
	cout << board[1][0] << "|" << board[1][1] << "|" << board[1][2] << endl;
	cout << "-----" << endl;
	cout << board[2][0] << "|" << board[2][1] << "|" << board[2][2] << endl;
}

bool validMove(char board) {
	//where the valid move should be tested for now it returns true indefinetly
	return true;
}
char InstructPlayer(char board[3][3],bool turn)
{
	
	 //true for X. False for O.
	int xvalue;
	int yvalue;
	char move;// move X or O depending on player
	if (turn == true||turn==1) {
		move = 'X';//translates turn to move 
	}
	if (turn == false||turn==0) {
		move = 'O'; // translates turn to move
	}
	
	cout << "*****Tic Tac Toe *****" << endl;
	cout << endl;
	cout << "Directions: Choose which box you want to alter!\n" << endl;

	cout << " 0,0 | 0,1 | 0,2 " << endl;
	cout << "-----------------" << endl;
	cout << " 1,0 | 1,1 | 1,2 " << endl;
	cout << "-----------------" << endl;
	cout << " 2,0 | 2,1 | 2,2 \n" << endl;
	cout << "Current board looks like this: \n";

	displayBoard(board);//displays board

	cout <<endl<< "Player " << move << ", please choose an option!\n" << endl;
	cout << "X value : " << endl;
	cin >> xvalue;
	cout << "Y value :" << endl;
	cin >> yvalue;

	if (/*validMove()*/ true) {//test move validity
		board[xvalue][yvalue] = move ;
		turn = !turn;
		return board[3][3],turn;
	
	}
	else {
		cout << "Invalid Move Please Try again";//if the players move is invalid they will redo the move.
		InstructPlayer(board,turn);
	}
	


int main()
{

	InstructPlayer();

	/*
	// int for column lookup(j = rows, i = columns
	int i = 0;


	//2D array to hold the board positions.
	//To access location you must choose the x,y positions

		{ -1, -1, -1 },
		{ -1, -1, -1 },
		{ -1, -1, -1 }

	};

	Player player_1;
	Player player_2;





	//Bool for alternating turns
	bool turn = false;

	// for loop to check iterate through the board
		//use to check where X or O is placed
	for (int j = 0; j < 3; j++)
	{

	//down lines 
	
		//Checks for down line from on column 1

	if (array[0][0] == array[1][0] && array[1][0] == array[2][0] && array[2][0] != -1)
	{
		std::cout << array[0][0] << " Wins!!! by a vertical line on column 1";
		return;
	}
		//Checks for down line from on column 2

	if (array[0][1] == array[1][1] && array[1][1] == array[2][1] && array[2][1] != -1)
	{
		std::cout << array[0][1] << " Wins!!! by a vertical line on column 2";
		return;
	}

		//Checks for down line from on column 3

	if (array[0][2] == array[1][2] && array[1][2] == array[2][2] && array[2][2] != -1)
	{
		std::cout << array[0][2] << " Wins!!! by a vertical line on column 3";
		return;
	}

	// Checking Diagonals

		//top left to bottom right
	if (array[0][0] == array[1][1] && array[1][1] == array[2][2] && array[2][2] != -1)
	{
		std::cout << array[0][0] << " Wins!!! by a top left to bottom right diagonal creation";
		return;
	}
		//top right to bottom left

	if (array[0][2] == array[1][1] && array[1][1] == array[2][0] && array[2][0] != -1)
	{
		std::cout << array[0][2] << " Wins!!! by a top right to bottom left diagonal creation";
		return;
	}

	// straight line

		//top line
	if (array[0][0] == array[0][1] && array[0][1] == array[0][2] && array[0][2] != -1)
	{
		std::cout << array[0][0] << " Wins!!! by top line creation";
		return;
	}

		//middle line
	if (array[1][0] == array[1][1] && array[1][1] == array[1][2] && array[1][2] != -1)
	{
		std::cout << array[1][0] << " Wins!!! by middle line creation";
		return;
	}

		//bottom line
	if (array[2][0] == array[2][1] && array[2][1] == array[2][2] && array[2][2] != -1)
	{
		std::cout << array[2][0] << " Wins!!! by bottom line creation";
		return;
	}

	else
	{ 
	
		std::cout << "Next turn";
		//continue loop for next turn

	}
}



void DrawBoard()
{

	/*
	
	
	*****Tic Tac Toe*****

	Player Turn: // 1 or 2

	 - | - | -
	-----------
	 - | - | -
	-----------
	 - | - | - 

	Score: // 0:1 or whatever it is

	*/



}

void InstructPlayer()
{
	cout << "*****Tic Tac Toe *****" << endl;
	cout << endl;
	cout << "Directions: Choose which box you want to alter!\n" << endl;

	cout << " 0,0 | 0,1 | 0,2 " << endl;
	cout << "-----------------" << endl;
	cout << " 1,0 | 1,1 | 1,2 " << endl;
	cout << "-----------------" << endl;
	cout << " 2,0 | 2,1 | 2,2 \n" << endl;

	cout << "Player " << playerturn << ", please choose an option!\n" << endl;
	cout << "X value : "<< endl;
	cin >> xvalue;
	cout << "Y value :" << endl;
	cin >> yvalue;
}

*/

void ResetBoard()
{


}

void ScoreBoard()
{

}



