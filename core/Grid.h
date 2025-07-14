#pragma once
#include "entities/Unit.h"
#include <vector>
#include <optional>

class Grid {
    public:
        Grid(int w, int h);
        void placeUnit(Unit* unit);
        bool isOccupied(int x, int y) const;
        Unit* getUnitAt(int x, int y) const;
        int width() const; int height() const;
    private:
        int w, h;
        std::vector<std::vector<Unit*>> tiles;
}