# Blackjack
C++ implementation of Blackjack
## Introduce to Blackjack
Blackjack, also known as twenty-one, is the most widely played casino banking game in the world. Blackjack is a comparing card game between a player and dealer, meaning players compete against the dealer but not against other players. It is played with one or more decks of 52 cards. The objective of the game is to beat the dealer in one of the following ways:

* Get 21 points on the player's first two cards (called a "blackjack" or "natural"), without a dealer blackjack;<br>
* Reach a final score higher than the dealer without exceeding 21; or<br>
* Let the dealer draw additional cards until his or her hand exceeds 21.<br>

The player or players are dealt a two-card hand and add together the value of their cards. Face cards (kings, queens, and jacks) are counted as ten points. A player and the dealer can count an ace as 1 point or 11 points. All other cards are counted as the numeric value shown on the card. After receiving their first two cards, players have the option of getting a "hit", or taking an additional card. In a given round, the player or the dealer wins by having a score of 21 or by having the higher score that is less than 21. Scoring higher than 21 (called "busting" or "going bust") results in a loss. A player may win by having any final score equal to or less than 21 if the dealer busts. If a player holds an ace valued as 11, the hand is called "soft", meaning that the player cannot go bust by taking an additional card; 11 plus the value of any other card will always be less than or equal to 21. Otherwise, the hand is "hard".

## Table rules
* Single deck
* Basic play only(Hit/Stand)
  * Hit: Take another card from the dealer.
  * Stand: Take no more cards, also known as "stand pat", "stick", or "stay".
  
## How to play
Start, the dealer give each player card face up two cards, give the dealer himself two cards.
When all the initial cards are distributed, if the player gets A and 10 (regardless of the order), they have Black Jack; the next is the normal take the card process: the first non-black Jack players choose to take the card (Hit), the suspension (Stand). In the process of licensing, if the player's card number sum larger than 21, the player lost - called burst out (Bust), the dealer win the bet (regardless of the dealer's cards). If the player did not burst, and decided to Stand, then turn to the next non-black Jack player's choice.
When all the players' turn end, the dealer opens his cards, and continue to take the card until the sum is not less than 17 (if A, according to the largest and not burst). If the dealer burst, then he lost, the player wins 1 times the bet; otherwise, compare the sum of each player's cards.

# Example
```
******Game Start!******
deck:
1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10 ,10 ,10 ,10 ,
1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10 ,10 ,10 ,10 ,
1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10 ,10 ,10 ,10 ,
1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10 ,10 ,10 ,10 ,
******Deck Shuffled!******
deck:
10 ,5 ,4 ,8 ,9 ,4 ,4 ,10 ,10 ,2 ,10 ,8 ,1 ,
5 ,8 ,10 ,10 ,1 ,6 ,5 ,9 ,10 ,10 ,10 ,10 ,6 ,
6 ,5 ,10 ,3 ,3 ,2 ,10 ,4 ,8 ,1 ,7 ,10 ,1 ,
10 ,7 ,2 ,2 ,7 ,6 ,3 ,7 ,9 ,10 ,10 ,3 ,9 ,

******Player1's move*******
Player1's Hand
Card:4
Card:8
Non Blackjack, Hit or Stand?
Press H to draw a card, press S to stand.
H
Card:4
Card:8
Card:10

******Player2's move*******
Player2's Hand
Card:9
Card:4
Non Blackjack, Hit or Stand?
Press H to draw a card, press S to stand.
H
Card:9
Card:4
Card:8

******Player3's move*******
Player3's Hand
Card:4
Card:10
Non Blackjack, Hit or Stand?
Press H to draw a card, press S to stand.
H
Card:4
Card:10
Card:1
Non Blackjack, Hit or Stand?
Press H to draw a card, press S to stand.
H
Card:4
Card:10
Card:1
Card:5
Non Blackjack, Hit or Stand?
Press H to draw a card, press S to stand.
S
Card:4
Card:10
Card:1
Card:5

******Player4's move*******
Player4's Hand
Card:10
Card:2
Non Blackjack, Hit or Stand?
Press H to draw a card, press S to stand.
H
Card:10
Card:2
Card:8
Non Blackjack, Hit or Stand?
Press H to draw a card, press S to stand.
S
Card:10
Card:2
Card:8
******Turns end!******
Dealer Hand:
Card:10
Card:5
Dealer Hand:
Card:10
Card:5
Card:10
******Check Win******
Dealer Hand:
Card:10
Card:5
Card:10
Player1's Hand
Card:4
Card:8
Card:10
Player2's Hand
Card:9
Card:4
Card:8
Player3's Hand
Card:4
Card:10
Card:1
Card:5
Player4's Hand
Card:10
Card:2
Card:8
Player1 Bust, lose!
Player2 Wins, Blackjack!
Dealer Bust, Player Wins!
Dealer Bust, Player Wins!

```
# TODO
Add money system and Double, Split actions to make it more fun!
* Double:The player is allowed to increase the initial bet by up to 100% 
 in exchange for committing to stand after receiving exactly one more card.

* Split: If the first two cards of a hand have the same value, the player can split 
 them into two hands, by moving a second bet equal to the first into an area outside
 the betting box.
