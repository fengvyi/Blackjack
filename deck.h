/*
============================================================================
Name        : deck.h
Author      : ZF Song
Version     :
Copyright   : ZF Song
Description : Simple deck with shuffler, print, getCard functions.
============================================================================
*/
#pragma once

/* Config Includes ***********************************************************/
#include<iostream>
#include<vector>
#include<stdlib.h>
#include<time.h>
/* End Config Includes *******************************************************/
using namespace std;

/* Public C++ Function Prototypes **********************************************/
/*****************************************************************************/
void init_deck();
void shuffler();
void print_deck();
int  getCard();
bool is_deck_empty();
/*****************************************************************************/
/* End Public C++ Function Prototypes ******************************************/


