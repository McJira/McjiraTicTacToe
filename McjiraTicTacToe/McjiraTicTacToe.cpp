#include "Player.h"
#include <array>
#include <iostream>
using namespace std;







bool CheckBoard(char array[][3])
{
	//down lines 

		//Checks for down line from on column 1

	if (array[0][0] == array[1][0] && array[1][0] == array[2][0] && array[2][0] != '-')
	{
		cout << array[0][0] << " Wins!!! by a vertical line on column 1";
		return true;
	}
	//Checks for down line from on column 2

	if (array[0][1] == array[1][1] && array[1][1] == array[2][1] && array[2][1] != '-')
	{
		cout << array[0][1] << " Wins!!! by a vertical line on column 2";
		return true;
	}

	//Checks for down line from on column 3

	if (array[0][2] == array[1][2] && array[1][2] == array[2][2] && array[2][2] != '-')
	{
		cout << array[0][2] << " Wins!!! by a vertical line on column 3";
		return true;
	}

	// Checking Diagonals

		//top left to bottom right
	if (array[0][0] == array[1][1] && array[1][1] == array[2][2] && array[2][2] != '-')
	{
		cout << array[0][0] << " Wins!!! by a top left to bottom right diagonal creation";
		return true;
	}
	//top right to bottom left

	if (array[0][2] == array[1][1] && array[1][1] == array[2][0] && array[2][0] != '-')
	{
		cout << array[0][2] << " Wins!!! by a top right to bottom left diagonal creation";
		return true;
	}

	// straight line

		//top line
	if (array[0][0] == array[0][1] && array[0][1] == array[0][2] && array[0][2] != '-')
	{
		cout << array[0][0] << " Wins!!! by top line creation";
		return true;
	}

	//middle line
	if (array[1][0] == array[1][1] && array[1][1] == array[1][2] && array[1][2] != '-')
	{
		cout << array[1][0] << " Wins!!! by middle line creation";
		return true;
	}

	//bottom line
	if (array[2][0] == array[2][1] && array[2][1] == array[2][2] && array[2][2] != '-')
	{
		cout << array[2][0] << " Wins!!! by bottom line creation";
		return true;
	}

	else
	{

		int j = 0;

		for (int i = 0; i < 3; i++)
		{

			if (i == 2 && j != 2)
			{

				i = 0;
				j++;

			}
			if (array[j][i] == '-')
			{

				break;

			}
			else if (array[j][i] == 'O' || array[j][i] == 'X')
			{
				if (j == 2 && i == 2)
				{
					cout << "Its a draw" << endl;
					return true;
				}
				else
				{
					continue;
				}
			}

		}

		return false;
		cout << "Next turn";

		//continue loop for next turn

	}
}

void displayBoard(char board[3][3]) {
	cout << board[0][0]<<"|"<<board[0][1]<<"|"<<board[0][2] << endl;
	cout << "-----" << endl;
	cout << board[1][0] << "|" << board[1][1] << "|" << board[1][2] << endl;
	cout << "-----" << endl;
	cout << board[2][0] << "|" << board[2][1] << "|" << board[2][2] << endl;
}

bool validMove(char board[3][3], int x, int y) {
	//where the valid move should be tested for now it returns true indefinetly
	//Checking if the move is within the bounds of the board 

	if (x < 0 || x >= 3 || y < 0 || y >= 3) {
		return false; 
		// We want to check and see if the selected cell is not already being occupied when in play.
	}
	if (board[x][y] == '-') {
		return true; 
	}
	else {
		return false; 
	}
}
char InstructPlayer(char board[3][3], bool turn)
{

	//true for X. False for O.
	int xvalue;
	int yvalue;
	char move;// move X or O depending on player
	if (turn == true || turn == 1) {
		move = 'X';//translates turn to move 
	}
	if (turn == false || turn == 0) {
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

	cout << endl << "Player " << move << ", please choose an option!\n" << endl;
	cout << "X value : " << endl;
	cin >> xvalue;
	cout << "Y value :" << endl;
	cin >> yvalue;

	if (validMove(board, xvalue, yvalue)) {//test move validity
		board[xvalue][yvalue] = move;
		turn = !turn;
		//added to check for win case or draw

	}
	else {
		cout << "Invalid Move Please Try again";//if the players move is invalid they will redo the move.
		InstructPlayer(board, turn);
	}

}

	int main()
	{

		bool turn = true;
		char board[3][3] =
		{
			{ '-', '-', '-'},
			{ '-', '-', '-'},
			{ '-', '-', '-'}
		};
		//InstructPlayer();



		//2D array to hold the board positions.
		//To access location you must choose the x,y positions
		

		//InstructPlayer(board, true);
		while (!CheckBoard(board))
		{
			
			InstructPlayer(board, turn);
			turn = !turn;
			

		}
		

	};

	//Player player_1;
	//Player player_2;





	//Bool for alternating turns






void DrawBoard()
{


	
	
	//*****Tic Tac Toe*****

	//Player Turn: // 1 or 2

	// - | - | -
	//-----------
	// - | - | -
	//-----------
	// - | - | - 

	//Score: // 0:1 or whatever it is

	



}

/*

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

	//cout << "Player " << playerturn << ", please choose an option!\n" << endl;
	cout << "X value : "<< endl;
	//cin >> xvalue;
	cout << "Y value :" << endl;
	//cin >> yvalue;
}

*/



void ResetBoard()
{


}

void ScoreBoard()
{

}



