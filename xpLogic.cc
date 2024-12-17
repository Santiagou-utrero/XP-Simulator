#include <iostream>
#include <fstream>
#include <string>
#include "xpLogic.h"

void show_message(int nivel){
    std::cout << "\nCongrats, you are now level: " <<  nivel << std::endl;
}

void level_up(int &xp, int &nivel, int &xpToLevelUp, int xpGain){
    xp += xpGain;
    if (xp >= xpToLevelUp)
    {
        xp -= xpToLevelUp;
        nivel++;
        xpToLevelUp += (xpToLevelUp / 2);
        show_message(nivel);
    }
    std::cout << "xp to level up: " << xpToLevelUp << " | actual level: " << nivel << std::endl;
}
