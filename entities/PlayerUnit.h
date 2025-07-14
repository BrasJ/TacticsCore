#pragma once
#include "Unit.h"

class PlayerUnit : public Unit {
    public:
        PlayerUnit(std::string name, Position pos);
        void takeTurn(GameEngine& engine) override;
};