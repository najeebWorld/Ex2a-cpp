#include "./sources/card.hpp"
#include "./sources/player.hpp"
#include "./sources/game.hpp"
#include "doctest.h"
//#pragma once


#include <iostream>
#include <stdexcept>
#include <vector>
#include <cassert>
#include <string.h>
#include <stdexcept>

using namespace std;
using namespace ariel;

TEST_CASE("constractor check"){
    CHECK_NOTHROW(Player p1("Alice"));
}

TEST_CASE("check the game constactor"){
    Player p1("Player1");
    Player p2("Player2");
    CHECK_NOTHROW(Game Game(p1,p2));
}

TEST_CASE("game functions"){
    Player p1("Player1");
    Player p2("Player2");
    int cards = 52; 

    CHECK(p1.stacksize() == (cards/2));
    CHECK(p2.stacksize() == (cards/2));
    CHECK(p1.stacksize() + p2.stacksize() == cards);


    Game game(p1,p2);
    game.playAll();
    CHECK(p1.stacksize() != cards/2);
    CHECK(p2.stacksize() != cards/2);



    CHECK_THROWS(game.playTurn());
    CHECK_THROWS(game.playAll());

}
TEST_CASE("first"){
    Player p1("Alice");
    Player p2("Bob");

    Game game(p1,p2);
    CHECK(p1.stacksize() == 0);
    CHECK(p2.stacksize() == 0);
    CHECK(p1.cardesTaken() == 0);
    CHECK (p2.stacksize() == 0);


}



// TEST_CASE("check get name function"){
//     Player p1("player");
//     CHECK(strcmp(p1.getName(),"plater") == 0);
// }

TEST_CASE("check all game function"){
    Player p1("player1");
    Player p2("player2");

    Game game(p1,p2);
    game.playAll();
    CHECK_NOTHROW(game.printLastTurn());
    CHECK_NOTHROW(game.printWiner());
    CHECK_NOTHROW(game.printStats());

}


TEST_CASE("player")
{
    
    
    Player p1("Alice");
    Player p2("Bob");

    
    

    SUBCASE ("getname"){
        Player p1("Alice");
        string name = p1.getName();
        //CHECK(strcmp(name,"Alice") == 0);
        //CHECK(p1.getName() == "Alice");
        CHECK(p1.stacksize()==0);
        CHECK(p1.cardesTaken()==0);
          
    }

    SUBCASE("taking card"){
        card c1 (hearts,ace);
        p1.addCard(c1);
        CHECK(p1.stacksize()==0);
        CHECK(p1.cardesTaken()==0);
    }

}


// TEST_CASE("cards"){
//     card c1 (hearts,ace);
//     assert (c1.getSuit() == hearts);
//     assert(c1.getValue() == ace);

//     card c2 (spades,queen);
//     assert (c2.getSuit() == spades);
//     assert(c2.getValue() == queen);


// }












