#pragma once

#include <windows.h>

class Game {


public:
	
	virtual ~Game();
	void cGame();

	//used for the stacks at the top of the game
	void aceStack();
	//used for the 7 rows, stacking the cards
	void stack();
	//used for the deck of cards remaining
	void deck();
	//The cards from the deck that you can use
	void usableCardFromDeck();






};