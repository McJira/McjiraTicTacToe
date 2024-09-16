#include "Declaration.h"
#include <array>

int main()
{

	InstructPlayer();

	// int for column lookup(j = rows, i = columns
	int i = 0;


	//2D array to hold the board positions.
	//To access location you must choose the x,y positions
	int board[3][3] = {

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

void ResetBoard()
{


}

void ScoreBoard()
{

}



