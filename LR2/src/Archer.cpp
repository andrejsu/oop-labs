#include "Archer.h"

Archer::Archer() : Unit(), actionRadius(0) {
  std::cout << "Archer constructor" << std::endl;
}

Archer::Archer(std::string name) : Unit(name), actionRadius(0) {
  std::cout << "Archer constructor" << std::endl;
}

Archer::~Archer() {
  std::cout << "Archer destructor" << std::endl;
}

void Archer::info() const {
  Unit::info();
  std::cout << "Action radius: " << this->actionRadius << std::endl;
}

void Archer::init() {
  Unit::init();
  std::cout << "Action radius: ";
  std::cin >> this->actionRadius;
}

bool Archer::isAlive() const {
  return Unit::getHealth() > 0 ? true : false; 
}

void Archer::printIsAlive() const {
  std::cout << std::endl;
  if (isAlive())
    std::cout << "The archer \"" << Unit::getName() << "\" is alive!" << std::endl;
  else 
    std::cout << "The archer \"" << Unit::getName() << "\" is dead!" << std::endl;
}

void Archer::setActionRadius(unsigned int actionRadius) {
  this->actionRadius = actionRadius;
}

unsigned int Archer::getActionRadius() const {
  return actionRadius;
}