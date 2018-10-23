#pragma once


#include <windows.h>



class Card {

public:


	float suit;
	float value;



	void cCard();
	virtual ~Card();

	void setSuit();
	void getSuit();
	void setValue();
	void getValue();




};