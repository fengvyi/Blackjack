/*
============================================================================
Name        : deck.cpp
Author      : ZF Song
Version     :
Copyright   : ZF Song
Description : Implementation of deck.h.
============================================================================
*/

/* Config Includes ***********************************************************/
#include "deck.h"
/* End Config Includes *******************************************************/

/* Public Global Variables ***************************************************/
int Ace = 1;
int J = 10;
int Q = 10;
int K = 10;
vector<int>deck;
/* End Public Global Variables ***********************************************/

/* Begin Function:init_deck **************************************************
Description : Initialize a classic 52-Card deck.
Input       : None.
Output      : Initialized deck.
Return      : None.
******************************************************************************/
void init_deck() {
	deck = { Ace,2,3,4,5,6,7,8,9,10,J,Q,K,
	         Ace,2,3,4,5,6,7,8,9,10,J,Q,K,
	         Ace,2,3,4,5,6,7,8,9,10,J,Q,K,
	         Ace,2,3,4,5,6,7,8,9,10,J,Q,K };
}
/* End Function:init_deck ****************************************************/

/* Begin Function:shuffler **************************************************
Description : Shuffle a classic 52-Card deck.
Input       : None.
Output      : Shuffled deck.
Return      : None.
****************************************************************************/
void shuffler() {
	srand((unsigned)time(0));
	for (int i = 0; i < 52; i++) 
		swap(deck[i], deck[52 * rand() / (RAND_MAX + 1)]);
	cout << "******Deck Shuffled!******" << endl;
}
/* End Function:shuffler ***************************************************/

/* Begin Function:print_deck ************************************************
Description : Print the deck.
Input       : None.
Output      : Deck.
Return      : None.
****************************************************************************/
void print_deck() {
	cout << "deck:" << endl;
	int t=0;
	for (auto i : deck) {
		cout << i << " ,";
		t++;
		if (t % 13 == 0) cout << endl;
	}
}
/* End Function:print_deck ************************************************/

/* Begin Function:getCard **************************************************
Description : Draw a card from deck.
Input       : None.
Output      : None.
Return      : card - the card we drew.
***************************************************************************/
int getCard() {
	int card=deck.front();
	deck.erase(deck.begin());
	return card;
}
/* End Function:getCard ****************************************************/

/* Begin Function:is_deck_empty *********************************************
Description : Check if the deck is empty.
Input       : None.
Output      : None.
Return      : deck.empty().
****************************************************************************/
bool is_deck_empty() {
	return deck.empty();
}
/* End Function:is_deck_empty***********************************************/

