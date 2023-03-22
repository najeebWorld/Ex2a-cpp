/*
File card.hpp 
In this file i will determine the value and the type of 
the card.

*/

#include <string>
using std :: string;

enum Value {deuce, trey, four, five, six, seven, eight, nine, ten, jack, queen, king, ace};
enum Type1 {clubs, diamonds, hearts, spades};

namespace ariel {
    class Card {

    public : 
        Card (Value faceValue=deuce, Type1 suit = clubs):
		type1(type1), faceValue(faceValue) {}
	    Type1 getSuit() { return type1; }
	    Value getValue() { return faceValue; }
	    static string typename1 (Type1 s);
	    static string valueName (Value v);
	    string name() { return valueName (faceValue) + " of " + typename1(type1);}
    private:
        Type1 type1;
		Value faceValue;
};
            
    };
