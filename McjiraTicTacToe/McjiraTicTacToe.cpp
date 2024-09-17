#include "Declaration.h"
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
	


}


int main()
{
	
	char move = 'X';
	char board[3][3] = {

		{ '-', '-', '-'},
		{ '-', '-', '-' },
		{ '-', '-', '-' }

	};
	//board decleration


	displayBoard(board);
	bool turn = true;
	cout << endl;
	char stop='m';
	while (/*Win() == false)||*/stop != 's'){//make sure to make a function to test the win.
		cout << "stop?";//this can be removed. it is just to stop the program while i was trouble shooting. 
		cin >> stop;
		board,turn=InstructPlayer(board,'X');
		InstructPlayer(board, turn);
		
	}

	/*
	// int for column lookup(j = rows, i = columns
	int i = 0;


	//2D array to hold the board positions.
	//To access location you must choose the x,y positions


	Player player_1;
	Player player_2;

	//Bool for alternating turns
	bool turn = false;
	// for loop to check iterate through the board
		//use to check where X or O is placed
	for (int j = 0; j < 3; j++)
	{

		if (i == 3)
		{
			break;
		}

		else if (j == 2)
		{
			i++;

			// -1 due to incrementation after loop end
			j = -1;
		}

		std::cout << board[i][j] << std::endl;






	}
	*/
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

bool Win() {
	return false;
}




void ResetBoard()
{


}

void ScoreBoard()
{

}



