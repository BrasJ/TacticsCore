#include "InputHandler.h"
#include <iostream>

Position InputHandler::getMovementInput() {
    int x, y;
    std::cout << "Enter new X Y position: ";
    std::cin >> x >> y;
    return {x, y};
}