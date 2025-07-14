#include "Grid.h"

Grid::Grid(int w, int h) : w(w), h(h), tiles(h, std::vector<Unit*>(w, nullptr)) {}

void Grid::placeUnit(Unit* unit) {
    auto [x, y] = unit->getPosition();
    tiles[y][x] = unit;
}

bool Grid::isOccupied(int x, int y) const {
    return tiles[y][x] != nullptr;
}

Unit* Grid::getUnitAt(int x, int y) const {
    return tiles[y][x];
}

void Grid::moveUnit(Unit* unit, int newX, int newY) {
    auto [x, y] = unit->getPosition();
    tiles [y][x] = nullptr;
    tiles [newY][newX] = unit;
    unit->setPosition({newX, newY});
}

int Grid::width() const { return w; }
int Grid::height() const { return h; }