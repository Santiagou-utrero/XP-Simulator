#include <iostream>
#include <fstream>
#include <string>
#include "tasks.h"
#include "xpLogic.h"
#include "games.h"

int main (){
    int xp = 0;
    int nivel = 1;
    int xpToLevelUp = 20;
    int option;
    char choise;

   do
   {
        std::cout << "Want to open the program (y/n):\n";
        std::cin >> choise;
        std::cin.ignore();

    if (choise == 'y' || choise == 'Y')
    {

        std::cout << "\nHi, what you want to do?:\n";
        std::cout << "1 - Make a note\n"
                  << "2 - Open minigames\n"
                  << "3 - Exit program\n";

        std::cin >> option;

        if (option == 1)
        {
            create_complex_note();
            level_up(xp, nivel, xpToLevelUp, 25); 

        } else if (option == 2){
            minigames(xp, nivel, xpToLevelUp);

        } else if (option == 3){
            std::cout << "Exit the program, have a good time\n";
            break;
        } 
        
        else {
            std::cout << "Invalid option\n";
        }
    }
   } while (choise == 'y' || choise == 'Y');
   
    return 0;
}