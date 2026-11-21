#include "gameLoop.h"
#include "inputHandler.h"
#include <iostream>

int main() {
    std::cout << "External program started!" << std::endl;
    GameLoop game;
    while (!game.isFinished()) {
        game.update();
        game.render();
    }
    return 0;
}

