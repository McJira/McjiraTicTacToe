#include "Player.h"
#include <array>
#include <iostream>
using namespace std;

// <Lee>
//    Themes
//        Comments sparse and largely could be much better ("this check move function for our ...")
//        Design concept is straightforward, implementation is a bit obscure due to naming, etc.
//        Variable names are not descriptive
//        Function names - mostly good, though consider making even clearer - e.g. ValidMove() -> isPlayerMoveValid()
//        Duplication should be reduced
//        Review hardcoded values
//        Remove remnants of unimplemented or refactored code
//        Implementation has various defects, some user visible, some landmines that may be triggered later (e.g. "while (playing = true)")

/* Sample main block comment to capture design & flow
 * McJira Tic Tac Toe
 *     Implements a console (text based) Tic Tac Toe game on a 3x3 board
 *     User inputs a desired move as a # from 0,0 (top left cell) to 2,2 (bottom right cell)
 *    A player wins with 3 cells in any direction (row, column or diagnoal)
 *     A game is considered a tie if no player wins and there are no empty spaces
 *     Player wins are tracked & can be displayed ...?
 *
 * Global data
 *      None - game board declared in main() and passed into supporting functions
 * 
 * Design
 *      main() - declares board, tracks player turns &
 *         main loop to display board, get player moves, update board & evaluate if game over
 *      CheckBoard(board array) - scans board to see if there is a winner, or tie
 *         returns - true - winner or tie & prints winning message on console
 *                   false - game continues
 *      displayBoard (board array) - displays board on console including showing what cells have been played
 *         void (no return)
 *      validMove (board array) - validates player entry is valid (row = 0,1,2 & column = 0,1,2) and square is empty ('-')
 *         returns - true if move is valid
 *                   false if move is invalid, or square has already been played
 *      InstructPlayer (board array, player) - prints game instructions, prompts for & retrieves player move
 *         return - 0?  (return value not meaningful)
 *         Note - incorrect moves handled via recursion, only exit criteria is a valid move!
 *      ResetBoard (board array) - clears board to starting values in each square ('-')
 *      
 */






//This Check Move Function for our tic tac toe board.
// HACK: standard for C++ is lowerCamel Case <Lee>

/* 
 *  Refactoring checkBoard
 *  returns true if game is over (win or a tie)
 *     if game is over, will print a message to the console indicating the winner & how they won
 *       or that the game is tied
 *  returns false otherwise
 *  
 */

bool checkBoard(char array[][3], char playerMarker)
{
	bool checkWinningVector(char, char, char, char);


	// first check columns, then rows, then diagonals & finally,
	//   walk through table to see if there are empty squares (if none - it's a tie)

	if (checkWinningVector(playerMarker, array[0][0], array[1][0], array[2][0]))
		cout << playerMarker << " Wins!!! by a vertical line on column 1" << endl;
	else if (checkWinningVector(playerMarker, array[0][1], array[1][1], array[2][1]))
		cout << playerMarker << " Wins!!! by a vertical line on column 2" << endl;
	else if (checkWinningVector(playerMarker, array[0][2], array[1][2], array[2][2]))
		cout << playerMarker << " Wins!!! by a vertical line on column 3" << endl;

	// rows
	else if (checkWinningVector(playerMarker, array[0][0], array[0][1], array[0][2]))
		cout << playerMarker << " Wins!!! by a horizontal line on row 1" << endl;
	else if (checkWinningVector(playerMarker, array[1][0], array[1][1], array[1][2]))
		cout << playerMarker << " Wins!!! by a horizontal line on row 2" << endl;
	else if (checkWinningVector(playerMarker, array[2][0], array[2][1], array[2][2]))
		cout << playerMarker << " Wins!!! by a horizontal line on row 3" << endl;

	// diagonals
	else if (checkWinningVector(playerMarker, array[0][0], array[1][1], array[2][2]))
		cout << playerMarker << " Wins!!! by a top left to bottom right diagonal" << endl;
	else if (checkWinningVector(playerMarker, array[2][0], array[1][1], array[0][2]))
		cout << playerMarker << " Wins!!! by a top right to bottom left diagonal" << endl;

	else { // no winner, check for a tie
		for (int row = 0; row < 3; row++) {
			for (int column = 0; column < 3; column++) {
				if (array[row][column] == '-') {
					// not a tie
					return false;
				}
			}
		}
		cout << "Its a draw" << endl;  // if didn't find an empty square, then the game is a tie
	}  // end checks for game over scenarios - if we got here, then game is over
	return true;
}

/** 
 * checkWinningVector() - arguments are the player marker (e.g. X or O) which is stored in the board
 *    and three boxes in the board
 *    returns true - if all specified boxes contain the player marker
 *            false - otherwise
 */
bool checkWinningVector(char playerMarker, char box1, char box2, char box3) {
	if ((playerMarker == box1) && (box1 == box2) && (box2 == box3))
		return true;  // have a winner
	else
		return false; // nope
}

void displayBoard(char board[3][3]) {
	cout << "\n";
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
	return 0;

}

//Function to reset the board
void ResetBoard(char board[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			board[i][j] = '-';
		}
	}
}

	int main()
	{

		bool turn = true;
		bool playing = true;
		char replay;
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
		// <Lee>
		//   The main loop is crisp - but non-intuitive, better naming & using helper functions would help a lot
		//   Consider:
		//    While (userWantsToPlay)
		//      While (gameInProgress)
		//         displayBoard()
		//         if (isUserMoveValid(getUserMove())
		//            updateTicTacToeBoard()
		//            if (GameIsOver() )
		//               congratulateWinner(); gameInProgress = false
		//            else
		//               togglePlayerToMove()
		//         else printInvalidUserMoveMessage()
		//      <end current game loop>
		// 
		//      if (!userWantsToPlayAgain())
		//         userWantsToPlay = false
		//      else
		//         resetGameBoard()
		//    <end multiple games loop>
		//  Note: no recursion, flow and intent becomes clear, functions defined to do ONE thing

		// <Lee> this condition actually works - but why?  land mine!
		while (playing = true)
		{
			while (!checkBoard(board, !turn?'X':'O'))
			{
				InstructPlayer(board, turn);
				// <Lee> consider someone else in the future trying to maintain this code, would they know what this statement is doing?
				//    no comments here (though there is one above)
				//    there are much better ways to do this
				turn = !turn;
			}

			cout << "Would you like to play again?" << endl;
			cout << "Enter a 'Y' for yes and a 'N' for no!" << endl;
			cin >> replay;

			if (replay == 'Y' || replay == 'y')
			{
				playing = true;
				ResetBoard(board);
			}
			else
			{
				playing = false;
				break;
			}
		}
		
	};

	//Player player_1;
	//Player player_2;





	//Bool for alternating turns




// ToDo - empty function?

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

// ToDo: DeCommissioned code?

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






