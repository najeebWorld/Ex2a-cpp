#pragma once
#include <string>
#include "card.hpp"
#include <vector>


using namespace std;


namespace ariel {
    class Player {
        public: 
            Player();//default constractor
            Player(string name);
            // Player(char* name) : name(name){} 
            int stacksize();

            //prints all cards
            int cardesTaken();//prints the cards that this player won. 
            string getName();//return the name 
            void setName(string name);
            void addCard(card c);//add card to the player
            card playCard(int c);

            bool isPlaying();
            void setStatusPlay(bool turn);//set if the player is playing or not
        private:
            string name;
            vector <card> cards;
            vector <card> CardsWon;
            bool playing;
    };


}