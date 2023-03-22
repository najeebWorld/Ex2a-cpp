
#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>
#include "vector"

#include "player.hpp"

using namespace std;

using std :: string;

namespace ariel {

    class Game {
        
        public : 
            static void playTurn();//play the game.
            Game();//default constructor.
            Game(Player p1,Player p2);// : playerP1(p1), playerP2(p2){}
            static void getNames();//get the names of two players.
            static void battle();
            /* each player has at least one card in his hand
            a compraison made between the two cards, if they
            have the same value , we will start "war"*/
            static int war();//the war, return 1 of
            //player 1 is the winner, 2 else.
            static void winner();//return the winner
            void printLastTurn();

            void playAll(); //playes the game untill the end
            void printWiner(); // prints the name of the winning player
            void printLog(); // prints all the turns played one line per turn (same format as game.printLastTurn())
            void printStats();
            
        private:

            static string p1,p2;
            Player playerP1,playerP2;
            static int rounds; 
            static int Max_rounds;




        



    };
}