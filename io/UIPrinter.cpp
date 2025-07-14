#include "UIPrinter.h"
#include <iostream>

void UIPrinter::printGrid(const Grid& grid) {
    for (int y = 0; y < grid.height(); ++y) {
        for (int x = 0; x < grid.width(); ++x) {
            auto unit = grid.getUnitAt(x, y);
            if (unit) std:: cout << "u ";
            else std:: cout << ". ";
        }
        std::cout << "\n";
    }
}