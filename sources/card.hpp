/*
File card.hpp 
In this file i will determine the value and the type of 
the card.

*/
#pragma once
#include <iostream>
#include <string>
using namespace std;

enum Value{deuce, trey, four, five, six, seven, eight, nine, ten, jack, queen, king, ace};
enum Type1{clubs, diamonds, hearts, spades};

namespace ariel {
    class card {

    public : 
		card();
        // card (Value faceValue=deuce, Type1 type1 = clubs):
		// type1(type1), faceValue(faceValue) {}
	    Type1 getSuit();
	    Value getValue();
	    string typename1(Type1 s);
	    string valueName(Value v);
	    string name();
    private:
        Type1 type1;
		Value faceValue;
};
            
    };
