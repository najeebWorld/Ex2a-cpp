/*
File card.hpp 
In this file i will determine the value and the type of 
the card.

*/
#pragma once
#include <iostream>
#include <string>
using namespace std;

enum Value{two = 2 , three =3 , four = 4, five = 5 , six = 6,seven = 7, eight = 8 , nine = 9 , ten = 10 , jack = 11, queen = 12, king = 13 , ace = 14 };
enum Type1{clubs, diamonds, hearts, spades};

namespace ariel {
    class card {

    public : 
		card();
        // card (Value faceValue=deuce, Type1 type1 = clubs):
		// type1(type1), faceValue(faceValue) {}
		card(Type1 t,Value v);
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
