
#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>
#include "vector"

#include "player.hpp"

using namespace std;

namespace ariel {

    class Game {
        
        public : 
            Game();//default constructor.
            Game(Player Plyp1,Player Plyp2) ;
            void playTurn();//play the game.
            void getNames();//get the names of two players.
            void battle();
            /* each player has at least one card in his hand
            a compraison made between the two cards, if they
            have the same value , we will start "war"*/
            int war();//the war, return 1 of
            //player 1 is the winner, 2 else.
            void winner();//return the winner
            void printLastTurn();

            void playAll(); //playes the game untill the end
            void printWiner(); // prints the name of the winning player
            void printLog(); // prints all the turns played one line per turn (same format as game.printLastTurn())
            void printStats();
            vector <string> players();//retuen the players
            
            //int playerSize();//return the size of players
            Player playerP1,playerP2;
            int rounds; //maybe I will not use them 
            int Max_rounds;

        private:

           // string p1,p2;
           



        



    };
}