// #pragma once
#include "../sources/player.hpp"
#include <iostream>

using namespace ariel;

Player::Player(string name){}

Player::Player(){}

int Player::cardesTaken(){
    return 0;
}

int Player::stacksize(){
    return 0;
}

void Player::setName(string name){
    this->name = name;
}


string Player::getName(){
    
    return this->name;
}
 void Player::addCard(card c1){}

 card Player::playCard(int c){
    card c1; 
    return c1;
 }

 bool Player::isPlaying(){
    return this->playing;
 }

 void Player::setStatusPlay(bool turn ){
    this->playing = turn;
 }