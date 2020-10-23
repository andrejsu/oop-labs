#include <iostream>

#include "src/Unit.h"
#include "src/Archer.h"

int main() {
  Unit unit;
  unit.init();
  unit.info();
  std::cout << "=======================" << std::endl;

  Archer archer;
  archer.init();
  archer.info();
  std::cout << "=======================" << std::endl;

  std::cout << "setHealth(0)";
  archer.setHealth(0);
  archer.printIsAlive();

  std::cout << "setHealth(100)";
  archer.setHealth(100);
  archer.printIsAlive();

  return 0;
}