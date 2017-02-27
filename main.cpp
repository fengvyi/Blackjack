/*
============================================================================
Name        : main.cpp
Author      : ZF Song
Version     :
Copyright   : ZF Song
Description : main().
============================================================================
*/

/* Config Includes ***********************************************************/
#include<iostream>
#include "game.h"
/* End Config Includes *******************************************************/

/* Begin Function:main **************************************************
Description : Let's play Blackjack!
Input       : None.
Output      : None.
Return      : None.
******************************************************************************/
void main() {
	//Add a Dealer
	addDealer();
	//Add players
	addPlayer();
	addPlayer();
	addPlayer();
	addPlayer();
	//Start game
	start();
	turn();
	checkWin();
	
	system("pause");
}
/* End Function:main ****************************************************/