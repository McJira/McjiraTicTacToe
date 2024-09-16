#include "Player.h"
#include <array>

void WinScenario(int array[][3]);

int main()
{

	//InstructPlayer();

	// int for column lookup(j = rows, i = columns
	int i = 0;


	//2D array to hold the board positions.
	//To access location you must choose the x,y positions
	int board[3][3] = {

		{ 0, 0, 1 },
		{ -1, 0, 0 },
		{ 1, 0, 1 }

	};
	/*
	* 
	* Suggestion: 
	* 
	* While(bool for win scenario)
	* {
	* 
	*		- this will have to be proben into turns
	*		-
	*		- std::cin << cordinate
    *		
	*     winScenario(board); to check for a win 
	* 
	* }
	*/
	Player player_1;
	Player player_2;


	WinScenario(board);


	//Bool for alternating turns
	bool turn = false;

	
}

void WinScenario(int array[][3])
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

/*

void InstructPlayer()
{
	std::cout << "*****Tic Tac Toe *****" << endl;
	std::cout << endl;
	std::cout << "Directions: Choose which box you want to alter!\n" << endl;

	std::cout << " 0,0 | 0,1 | 0,2 " << endl;
	std::cout << "-----------------" << endl;
	std::cout << " 1,0 | 1,1 | 1,2 " << endl;
	std::cout << "-----------------" << endl;
	std::cout << " 2,0 | 2,1 | 2,2 \n" << endl;

	std::cout << "Player " << playerturn << ", please choose an option!\n" << endl;
	std::cout << "X value : "<< endl;
	std::cin >> xvalue;
	std::cout << "Y value :" << endl;
	std::cin >> std::yvalue;
}

*/

void ResetBoard()
{


}

void ScoreBoard()
{

}



