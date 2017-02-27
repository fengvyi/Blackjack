/*
============================================================================
Name        : game.h
Author      : ZF Song
Version     :
Copyright   : ZF Song
Description : Game control. The controller has actions of addDealer, addPlayer, 
              start game, take turns from player to player and check who wins.
============================================================================
*/
#pragma once
/* Config Includes ***********************************************************/
#include "dealer.h"
/* End Config Includes *******************************************************/

/* Public C++ Function Prototypes ********************************************/
/*****************************************************************************/
void addDealer();
void addPlayer();
void start();
void checkWin();
void turn();
/*****************************************************************************/
/* End Public C++ Function Prototypes ****************************************/