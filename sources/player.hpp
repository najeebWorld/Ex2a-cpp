#pragma once
#include <string>
#include "card.hpp"
#include <vector>


using namespace std;


namespace ariel {
    class Player {
        public: 
            Player();//default constractor
            Player(string name) : name(name){} 
            // Player(char* name) : name(name){} 
            int stacksize();
            //prints all cards
            int cardesTaken();//prints the cards that this player won. 

        private:
            string name;
            // char* name_;
            vector <card> cards;
            vector <card> CardsWon;
    };


}