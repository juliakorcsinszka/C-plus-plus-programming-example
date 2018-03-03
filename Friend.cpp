/*
 * Julia Korcsinszka
 * Student ID: 201077367
 * Departmental ID: u5jk2
 */

#include "Game_character.hpp"
#include "Friend.hpp"

//method to print details of the Friend
void Friend::print_Character() {
    
    cout << "Friend's name is " << name;
    cout << ", strength is " << strength;
    cout << ", intelligence is " << intelligence;
    cout << ", spell is " << spell << "\n";
    
}
