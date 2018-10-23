

#include "Game.h"
#include "Card.h"



Game::~Game(){

	 
}

void Game::cGame(){


}

//used for the stacks at the top of the game
void Game::aceStack(){

	//check to see if the the cards are the same suit
	//check to see if the value is 1 greater than what is already there
	//use a doubly linked list, so we know what value is behind the current card

}

//used for the 7 rows, stacking the cards
void Game::stack(){

	//make sure that each stack knows what is below it
	//if the player moves something then call this function
	//if there is an empty space then flip over the card with the empty space after the player has made a legal move



}

void Game::deck(){

	//use a stack to see what is the top card of the deck, when drawing
}


void Game::usableCardFromDeck(){

	//pop from the deck stack in order to draw cards, 
	//either 1 or 3 times depending on gamemode


	//move it to a new zone and start creating a new stack,
	//when moving the revealed cards from the deck back to the deck,
	//inverse the stack

}
