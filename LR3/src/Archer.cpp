#include "Archer.h"

Archer::Archer() {
  std::cout << "Archer constructor" << std::endl;
}

Archer::Archer(std::string name) : name(name) {
  std::cout << "Archer constructor" << std::endl;
}

Archer::~Archer() {
  std::cout << "Archer destructor" << std::endl;
}

void Archer::info() {
  std::cout << "\tArcher name: " << this->name << std::endl;
}

void Archer::setName(std::string) {
  this->name = name;
}

std::string Archer::getName() const {
  return name;
}