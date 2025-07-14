#pragma once
#include "entities/Unit.h"
#include "core/Grid.h"
#include <vector>

class GameEngine {
    public:
        void run();
    private:
        Grid grid;
        std::vector<Unit*> turnOrder;
        void setup();
        void mainLoop();
        void handleTurn(Unit* unit);
};