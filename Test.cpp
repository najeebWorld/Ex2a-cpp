#include "./sources/card.hpp"
#include "./sources/player.hpp"
#include "./sources/game.hpp"
#include "doctest.h"

#include <iostream>
#include <stdexcept>
#include <vector>
#include <cassert>


using namespace std;
using namespace ariel;

TEST_CASE("player")
{
    
    
    Player p1("Alice");
    Player p2("Bob");

    
    

    SUBCASE ("constractor"){
        CHECK(p1.getName() == "Alice");
        CHECK(p1.stacksize()==0);
        CHECK(p1.cardesTaken()==0);
          
    }

    SUBCASE("taking card"){
        card c1 (hearts,ace);
        p1.addCard(c1);
        CHECK(p1.stacksize()==0);
        CHECK(p1.cardesTaken()==0);
    }



    Game game(p1,p2); 
    

}

TEST_CASE("cards"){
    card c1 (hearts,ace);
    assert (c1.getSuit() == hearts);
    assert(c1.getValue() == ace);

    card c2 (spades,queen);
    assert (c2.getSuit() == spades);
    assert(c2.getValue() == queen);


}

TEST_CASE("game"){}
    

    // SUBCASE("constractor"){
    //     CHE
    // }










