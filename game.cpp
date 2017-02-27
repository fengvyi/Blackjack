/*
============================================================================
Name        : game.cpp
Author      : ZF Song
Version     :
Copyright   : ZF Song
Description : Game control. The controller has actions of addDealer, addPlayer, 
              start game, take turns from player to player and check who wins.
============================================================================
*/
/* Config Includes *****************************************************/
#include "game.h"
#include<string>
/* End Config Includes *************************************************/

/* Public Global Variables *********************************************/
vector<Dealer*>dealerSet;
vector<Player*>playerSet;
/* End Public Global Variables *****************************************/

/* Begin Function:addDealer *********************************************
Description : Add a Dealer to the game.
Input       : None.
Output      : None.
Return      : None.
************************************************************************/
void addDealer() {
	Dealer* d = new Dealer();
	dealerSet.push_back(d);
}
/* End Function:addDealer **********************************************/

/* Begin Function:addPlayer *********************************************
Description : Add a Player to the game.
Input       : None.
Output      : None.
Return      : None.
************************************************************************/
void addPlayer() {
	Player* d = new Player();
	playerSet.push_back(d);
}
/* End Function:addPlayer ***********************************************/

/* Begin Function:start **************************************************
Description : Start game, config deck and players.
Input       : None.
Output      : None.
Return      : None.
*************************************************************************/
void start() {
	cout << "******Game Start!******"<<endl;
	init_deck();
	print_deck();
	shuffler();
	print_deck();
	Dealer* d = dealerSet.front();
	d->setPlayerSet(playerSet);
	d->Distribute();
}
/* End Function:start ****************************************************/

/* Begin Function:checkWin ************************************************
Description : Check who wins in a round.
Input       : None.
Output      : None.
Return      : None.
**************************************************************************/
void checkWin() {
	cout << "******Check Win******" << endl;
	Dealer* d = dealerSet.front();
	int dealerHand=d->CheckHand();
	int player = 0;

	string res = "";
	for (auto p : d->getPlayerSet()) {
		player++;
		cout << "Player" << player << "'s Hand" << endl;
		int playerHand = p->CheckHand();
		if (playerHand == 21 && dealerHand == 21) {
			res += "Player";
			res += (char)(player + '0');
			res+=" Blackjack Push!\n";
		}else
		if (playerHand == 21 && dealerHand != 21) {
			res += "Player";
			res += (char)(player + '0');
			res += " Wins, Blackjack!\n";
		}else
		if(playerHand != 21 && dealerHand == 21) {
			res+= "Dealer Wins, Blackjack!\n";
		}else
		if (playerHand <21 && playerHand > dealerHand) {
			res+= "Player";
			res+= (char)(player + '0');
			res += " Wins!\n";
		}else
		if (playerHand > 21) {
			res+= "Player";
			res+= (char)(player + '0');
			res += " Bust, lose!\n";
		}else
		if (dealerHand > 21) {
			res+= "Dealer Bust, Player Wins!\n";
		}else
		if (playerHand == dealerHand) {
			res += "Player";
			res += (char)(player + '0');
			res+= " Push!\n";
		}else
		if (playerHand < dealerHand) {
			res += "Player";
			res += (char)(player + '0');
			res += " lose!\n";
		}
	}
		cout << res << endl;
}
/* End Function:checkWin ****************************************************/

/* Begin Function:turn *******************************************************
Description : Take turns, each non-blackjack player can choose to Hit or Stand,
              if hand>21, Bust! 
			  After all players' turn end, Dealer must Hit until hand>17,
			  if hand>21, Bust, else, checkWin().
Input       : None.
Output      : None.
Return      : None.
******************************************************************************/
void turn() {
	Dealer* d = dealerSet.front();
	int player = 0;
	for (auto p : d->getPlayerSet()) {
		player++;
		cout << endl;
		cout << "******Player" << player << "'s move*******" << endl;
		cout << "Player" << player << "'s Hand" << endl;
		int playerHand = p->CheckHand();
		char c = ' ';
		while (c != 'S' && playerHand < 21) {
			c = p->choice();
			if (c == 'H') 
				p->Hit();
			else if (c == 'S') 
				/*Stand, do nothing*/;
			else 
				cout << "Invalid input, try again." << endl;
			playerHand = p->CheckHand();
		}
	}
	cout << "******Turns end!******" << endl;
	while (d->CheckHand() < 17) 
		d->Hit();
}
/* End Function:turn ****************************************************/