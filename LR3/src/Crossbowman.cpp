#include "Crossbowman.h"

Crossbowman::Crossbowman() : Archer() {
  std::cout << "Crossbowman constructor" << std::endl;
}

Crossbowman::Crossbowman(std::string name, unsigned int actionRadius) : Archer(name), actionRadius(actionRadius) {
  std::cout << "Crossbowman constructor" << std::endl;
}

Crossbowman::~Crossbowman() {
  std::cout << "Crossbowman destructor" << std::endl;
}

void Crossbowman::info() {
  Archer::info();
  std::cout << "\tAction radius: " << this->actionRadius << std::endl;
}

void Crossbowman::setActionRadius(unsigned int actionRadius) {
  this->actionRadius = actionRadius;
}

unsigned int Crossbowman::getActionRadius() const {
  return actionRadius;
}