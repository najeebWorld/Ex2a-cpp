#include "../sources/card.hpp"
#include <iostream>

using namespace ariel;

	card::card(){}
	card :: card (Type1 t, Value v){}

	Type1 card::getSuit() { return clubs; }//return type1; }

	Value card::getValue() { return queen; }// return faceValue; }
	
	string card::typename1 (Type1 s) { return ""; }
	
	string card::valueName (Value v){ return ""; }
	
	// string card::name() { return valueName (faceValue) + " of " + typename1(type1);}
	string card::name() { return "";}