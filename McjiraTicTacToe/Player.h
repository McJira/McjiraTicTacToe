#pragma once
#include <iostream>

class Player
{
private:

	int score;

public:

	//Other Functions
	void IncrementScore();
	//Setter Functions
	void SetScore(int);
	//Getter Functions
	int GetScore();
	//Constructors and Destructors
	Player();
	~Player();

};
