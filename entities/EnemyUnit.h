#pragma once
#include "Unit.h"

class EnemyUnit : public Unit {
    public:
        EnemyUnit(std::string name, Position pos);
        void takeTurn(GameEngine& engine) override;
};