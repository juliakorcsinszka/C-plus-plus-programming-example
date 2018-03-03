/*
 * Julia Korcsinszka
 */

#include <stdio.h>
#include <iostream>

using namespace std;

//Foe class that inherits from the GameCharacter
class Foe : public GameCharacter{
    
//attributes of the Foe 
    int wrath;
    
public:
    
    //constructor
    Foe (string n, int s, int w)
    {name=n; strength = s; wrath = w;};
    
    //inherited method to print Foe's details
    void print_Character();
};
