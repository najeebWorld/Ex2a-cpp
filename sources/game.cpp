#include "game.hpp"
#include <iostream>
#include "player.hpp"

using namespace std;
using namespace ariel;

 Game::Game(Player p1,Player p2){
    if (p1.stacksize() > 0 || p2.stacksize() > 0 ){
        throw invalid_argument("please waite until they finith the game");
    }
    
    this->playerP1 = p1;
    this->playerP2= p2;

    
    
 }

void Game::playTurn(){}

void Game::printLastTurn(){}

void Game::playAll(){}

void Game::printWiner(){}

void Game::printLog(){}

void Game::printStats(){}