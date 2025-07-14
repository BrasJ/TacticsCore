#include "GameEngine.h"
#include "io/UIPrinter.h"
#include "entities/PlayerUnit.h"
#include "entities/EnemyUnit.h"
#include <iostream>

void GameEngine::run() {
    setup();
    mainLoop();
}

void GameEngine::setup() {
    grid = Grid(8, 8);  // 8x8 grid
    turnOrder.push_back(new PlayerUnit("Knight", {1, 1}));
    turnOrder.push_back(new EnemyUnit("Goblin", {6, 6}));
    for (auto unit : turnOrder) grid.placeUnit(unit);
}

void GameEnginer::mainLoop() {
    bool gameOver = false;
    while (!gameOver) {
        for (auto unit : turnOrder) {
            if (unit->isAlive()) handleTurn(unit);
        }
    }
}

void GameEngine::handleTurn(Unit* unit) {
    UIPrinter::printGrid(grid);
    unit->takeTurn(*this);
}