#include "Unit.h"

Unit::Unit(std::string name, Position pos) : name(name), pos(pos), hp(100) {}

bool Unit::isAlive() const { return hp > 0; }
Position Unit::getPosition() const { return pos; }
void Unit::setPosition(Position p) { pos = p; }