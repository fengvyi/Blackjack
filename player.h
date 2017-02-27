/*
============================================================================
Name        : player.h
Author      : ZF Song
Version     :
Copyright   : ZF Song
Description : Class - Player, a Player has a hand of cards and has actions of
              Hit, Stand, Double, Split, CheckHand and make choice to the 
			  actions above in his turn.
============================================================================
*/
#pragma once
/* Config Includes ***********************************************************/
#include "deck.h"
/* End Config Includes *******************************************************/

/* Begin Class: Player **********************************************
Description : The informations of a Player.
******************************************************************************/
class Player {
/* Private Variables ***************************************************/
private:
	vector<int>hand;
/* End Private Variables ***********************************************/
public:
	/* Public C++ Function Prototypes **********************************************/
	/*****************************************************************************/
	void Hit();
	void Stand();
	void Double();
	void Split();
	int CheckHand();
	char choice();
	/*****************************************************************************/
	/* End Public C++ Function Prototypes ******************************************/
};
/* End Class: Player *******************************************************/