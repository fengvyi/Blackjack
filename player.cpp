/*
============================================================================
Name        : player.cpp
Author      : ZF Song
Version     :
Copyright   : ZF Song
Description : Implementation of Class - Player, a Player has a hand of cards 
              and has actions of Hit, Stand, Double, Split, CheckHand and make 
			  choice to the actions above in his turn.
============================================================================
*/
/* Config Includes ***********************************************************/
#include "player.h"
/* End Config Includes *******************************************************/

/* Begin Function:Hit ********************************************************
Description : Take another card from top of the deck.
Input       : None.
Output      : None.
Return      : None.
******************************************************************************/
void Player::Hit() {
	this->hand.push_back(getCard());
}
/* End Function:Hit **********************************************************/

/* Begin Function:Stand ********************************************************
Description : Take no more cards, also known as "stand pat", "stick", or "stay".
Input       : None.
Output      : None.
Return      : None.
******************************************************************************/
void Player::Stand() {
	//Stand, do nothing.
}
/* End Function:Stand **********************************************************/

/*TODO:The player is allowed to increase the initial bet by up to 100% 
in exchange for committing to stand after receiving exactly one more card.*/
void Player::Double() {}

/*TODO: If the first two cards of a hand have the same value, the player can split 
them into two hands, by moving a second bet equal to the first into an area outside
the betting box.*/
void Player::Split() {}

/* Begin Function:CheckHand ********************************************************
Description : Check the sum of player's cards.
Input       : None.
Output      : None.
Return      : sum - the sum of player's cards.
************************************************************************************/
int Player::CheckHand() {
	int sum = 0;
	for (auto i : this->hand) {
		if (i == 1 && sum + 11 <= 21) i = 11;
		cout << "Card:" << i << endl;
		sum += i;
	}
	return sum;
}
/* End Function:CheckHand *********************************************************/

/* Begin Function:choice ********************************************************
Description : In each turn, Players can choose to Hit or Stand if their hand<21.
Input       : None.
Output      : None.
Return      : c - choice Player made.
************************************************************************************/
char Player::choice() {
	cout << "Non Blackjack, Hit or Stand?" << endl;
	cout << "Press H to draw a card, press S to stand." << endl;
	char c = ' ';
	cin >> c;
	return c;
}
/* End Function:choice *************************************************************/




