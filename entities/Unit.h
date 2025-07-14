#pragma once
#include <string>
#include "utils/Position.h"

class GameEngine;

class unit {
    public:
        Unit(std::string name, Position pos);
        virtual void takeTurn(GameEngine& engine) = 0;
        bool isAlive() const;
        Position getPosition() const;
        void setPosition(Position pos);
    protected:
        std::string name;
        Position pos;
        int hp;
};