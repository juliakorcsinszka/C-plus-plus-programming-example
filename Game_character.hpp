/*
 * Julia Korcsinszka
 * Student ID: 201077367
 * Departmental ID: u5jk2
 */

#include <stdio.h>
#include <iostream>

using namespace std;

//general class for a general game character
class GameCharacter{

//attributes of the character
protected:
    
    string name;
    int strength;
    
//methods and conctructors for the object
public:
    
    //constructor
    GameCharacter(string n, int s)
    {name=n; strength = s;};
    GameCharacter() {}; //default constructor
    
    virtual void print_Character();
    virtual int get_Strength();
    virtual string get_Name();
    
};
