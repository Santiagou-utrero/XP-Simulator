#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include "games.h"
#include "xpLogic.h"



bool rock_paper_scissors_game(){

    std::string rock = "rock";
    std::string paper = "paper";
    std::string scissors = "scissors";
    std::string option[] = {rock, paper, scissors};

    std::string optionChosen;

    std::cout << "Hello, chose between rock, paper or scissors:\n";
    std::cin >> optionChosen;

    if (optionChosen == "rock")
    {
        std::cout << "you chose rock\n";

    } else if (optionChosen == "paper"){

        std::cout << "you chose paper\n";

    } else if (optionChosen == "scissors")
    {
        std::cout << "you chose scissors\n";

    } else{
        std::cout << "invalid argument\n";
        return false;
    }
    
    std::mt19937 gen (std::time(0));
    std::uniform_int_distribution<int> dis (0, 2);
    int randomNumber = dis(gen);
    
    std::string botChoise = option[randomNumber];
    std::cout << "\nBot already choose\n";

    if (optionChosen == botChoise)
    {
        std::cout << "\nits a draw!\n";
        return false;
    } else if (
        (optionChosen == rock && botChoise == scissors) ||
        (optionChosen == paper && botChoise == rock) ||
        (optionChosen == scissors && botChoise == paper)
    )
    {
        std::cout << "\nCongrats, you win!\n";
        return true;
    } else {
        std::cout << "\nBetter luck next time, buddy\n";
        return false;
    }
}

void minigames(int &xp, int &nivel, int &xpToLevelUp){
    int userOption;
    bool won = false;

    std::cout << "Hi, what game you want to play:\n";
    std::cout << "1-Rock, paper, scissors\n";
    std::cin >> userOption;

    switch (userOption)
    {
    case 1:
            won = rock_paper_scissors_game();
            if (won)
            {
               level_up(xp, nivel, xpToLevelUp, 50);
            } else{
                std::cout << "Not xp for loses or draws\n";
            }
        
        break;
    
    default:
        std::cout << "Invalid option.\n";
        break;
    }

}