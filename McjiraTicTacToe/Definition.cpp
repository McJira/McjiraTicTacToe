#include "Declaration.h"



void Player::IncrementScore()
{
	score++;
}
//Setter Functions
void Player::SetScore(int score)
{
	this->score = score;
}
//Getter Functions
int Player::GetScore()
{
	return score;
}

//Constructors and Destructors

Player::Player()
{

}
Player::~Player()
{
	std::cout << "Player object destroyed" << std::endl;
}

