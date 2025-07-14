#include "PlayerUnit.h"
#include "core/Grid.h"
#include "core/GameEngine.h"
#include "io/InputHandler.h"
#include <iostream>

PlayerUnit::PlayerUnit(std::string name, Position pos) : Unit(name, pos) {}

void PlayerUnit::takeTurn(GameEngine& engine) {
    std::cout << name "'s turn!\n";
    auto [x, y] = InputHandler::getMovementInput();
    engine.grid.moveUnits(this, x, y);
}