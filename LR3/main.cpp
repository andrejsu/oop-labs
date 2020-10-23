#include <iostream>

#include "src/Unit.h"
#include "src/Archer.h"
#include "src/Crossbowman.h"

int main() {
  Unit *unit;

  unit = new Archer("Alex");
  unit->info();
  delete unit;

  std::cout << "===============================" << std::endl;

  unit = new Crossbowman("Andrew", 100);
  unit->info();
  delete unit;

  return 0;
}