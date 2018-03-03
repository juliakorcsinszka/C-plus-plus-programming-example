/*
 * Julia Korcsinszka
 * Student ID: 201077367
 * Departmental ID: u5jk2
 */

// include all the header files
#include "Game_character.hpp"
#include "Friend.hpp"
#include "Foe.hpp"

#include <stdio.h>
#include <iostream>
#include <vector>

//create a vector to store pointers to characters
vector <GameCharacter*> character;

//option 1 - create a friend
void get_Friend(){
    
    //prompt user for details of the friend, and store them
    string name;
    cout << "Enter name: ";
    cin >> name;
    
    int strength;
    cout << "Enter strength: ";
    cin >> strength;
    
    int intelligence;
    cout << "Enter intelligence: ";
    cin >> intelligence;
    
    string spell;
    cout << "Enter spell: ";
    cin >> spell;
    
    //add the friend into the vector
    character.push_back(new Friend(name, strength, intelligence, spell));
}

//option 2 - create a foe
void get_Foe(){
    
    //prompt user for details of the foe, and store them
    string name;
    cout << "Enter name: ";
    cin >> name;
    
    int strength;
    cout << "Enter strength: ";
    cin >> strength;
    
    int wrath;
    cout << "Enter wrath: ";
    cin >> wrath;
    
    //add the foe into the vector
    character.push_back(new Foe(name, strength, wrath));
}

//option 3 - display all characters
void print_Characters(){
    
    //loop through all of the elements of the vector
    for (auto val : character) {
        //call the print_Character() function of each vector element
        (*val).print_Character();
    }
}

//option 4 - the battle
void battle(){
    
    //variable to store location of player 1 in the vector
    int playerOne;
    
    //get the location of a random character within the range of all of the characters
    playerOne = rand() % (0 + (int) (character.size()-1));
    
    //variable to store location of player 2 in the vector
    int playerTwo;
    
    //if player 1 adnd player 2 are the same, look for a different player 2
    do{
        //location of player 2 in the vector
        playerTwo = rand() % (0 + (int) (character.size()-1));
    }while (playerOne == playerTwo);

    //get names and strengths of the players
    string playerOneName = character.at(playerOne)->get_Name();
    int playerOneStrength = character.at(playerOne)->get_Strength();
    string playerTwoName = character.at(playerTwo)->get_Name();
    int playerTwoStrength = character.at(playerTwo)->get_Strength();
    
    //tell the user about the players
    cout << playerOneName << " will battle with " << playerTwoName << ".\n";
    cout << playerOneName << " has strength " << playerOneStrength << ".\n";
    cout << playerTwoName << " has strength " << playerTwoStrength << ".\n";
    
    //      -   -   - Compare the strengths of the players -    -   -
    
    //if player 1 is stronger
    if (playerOneStrength > playerTwoStrength){
        cout << playerOneName << " wins!\n";
        
        //delete the player that lost
        character.erase(character.begin()+playerTwo);
    }
    //if player 2 is stronger
    else if (playerOneStrength < playerTwoStrength){
        cout << playerTwoName << " wins!\n";
        
        //delete the player that lost
        character.erase(character.begin()+playerOne);
    }
    //if players have the same strengths
    else {
        cout << "Players have the same strength, both live on!\n";
    }
    
}

//  *   *   *   * Main Method *   *   *   *
int main (){
    
    int choice; //the selection that the user has made
    string junk; //the "junk" on the rest of the line of input
    
    //show user the menu, as long as they do not click 5 (quit)
    do{
        //output the menu
        cout << "Main Menu:\n\n";
        cout << "1) Create friend\n2) Create foe\n3) Display all characters\n4) Do battle\n5) Quit\n\n";
        cout << "What would you like to do? ";
        //get the option the user selected
        cin >> choice;
        cout<< "\n";
        //get rid of the rest of the line
        getline (cin, junk);
        //see what the user has chosen and call an appropriate function
        switch (choice){
            case 1: get_Friend();
                break;
            case 2: get_Foe();
                break;
            case 3: print_Characters();
                break;
            case 4: battle();
                break;
            case 5://if user wants to quit
                break;
            default: cout << "Not a valid option\n";
                break;
        }
    }while (choice != 5);
    
return 0;
}
