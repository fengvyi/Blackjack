/*
============================================================================
Name        : dealer.cpp
Author      : ZF Song
Version     :
Copyright   : ZF Song
Description : Implementation of Class - dealer, a Dealer has a hand of cards and 
              PlayerSet he aganist to, also has actions of Hit, CheckHand, 
			  Distribute cards and getPlayerSet, but Dealer can not choose 
			  to Stand in his turn.
============================================================================
*/
/* Config Includes ***********************************************************/
#include "dealer.h"
/* End Config Includes *******************************************************/

/* Begin Function:setPlayerSet ****************************************************
Description : Initialize player set.
Input       : None.
Output      : None.
Return      : None.
******************************************************************************/
void Dealer::setPlayerSet(vector<Player*>& playerSet) {
	this->playerSet = playerSet;
}
/* End Function:setPlayerSet  *******************************************************/

/* Begin Function:getPlayerSet ****************************************************
Description : Get player set.
Input       : None.
Output      : None.
Return      : this->playerSet - return current player set.
******************************************************************************/
vector<Player*> Dealer::getPlayerSet() {
	return this->playerSet;
}
/* End Function:getPlayerSet *******************************************************/

/* Begin Function:Hit ********************************************************
Description : Take another card from top of the deck.
Input       : None.
Output      : None.
Return      : None.
******************************************************************************/
void Dealer::Hit() {
	this->hand.push_back(getCard());
}
/* End Function:Hit **********************************************************/

/* Begin Function:Distribute ********************************************************
Description : The player or players are dealt a two-card hand.
Input       : None.
Output      : None.
Return      : None.
******************************************************************************/
void Dealer::Distribute() {
	
	this->Hit();
	this->Hit();

	for (auto p : this->playerSet) {
		p->Hit();
		p->Hit();
	}
}
/* End Function:Distribute**********************************************************/

/* Begin Function:CheckHand ********************************************************
Description : Check the sum of Dealer's cards.
Input       : None.
Output      : None.
Return      : sum - the sum of Dealer's cards.
************************************************************************************/
int Dealer::CheckHand() {
	int sum = 0;
	cout << "Dealer Hand:" << endl;
	for (auto i : this->hand) {
		if (i == 1 && sum + 11 <= 21) i = 11;
		cout << "Card:" << i << endl;
		sum += i;
	}
	return sum;
}
/* End Function:CheckHand *********************************************************/