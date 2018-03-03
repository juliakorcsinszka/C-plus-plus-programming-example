/*
 * Julia Korcsinszka
 */

#include <stdio.h>
#include <iostream>

using namespace std;

//Friend class that inherits from the GameCharacter
class Friend : public GameCharacter{
    
//attributes of the Friend
    int intelligence;
    string spell;
    
//methods of the Friend
public:
    
    //constructor
    Friend (string n, int s, int i, string sp)
    {name=n; strength = s; intelligence = i; spell = sp;};
    
    //inherited method to print Friend's details
    void print_Character();
};
