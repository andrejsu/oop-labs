#include "Transport.h"

Transport::Transport(unsigned int tonnage, std::string type) : tonnage(tonnage), type(type) {
  std::cout << "Transport constuctor" << std::endl;
}

Transport::~Transport() {
  std::cout << "Transport destructor" << std::endl;
}

void Transport::info() const {
  std::cout << "============== Transport info ==============" << std::endl;
  std::cout << "Tonnage: " << tonnage << std::endl;
  std::cout << "Type: " << type << std::endl;
}

unsigned int Transport::getTonnage() const {
  return tonnage;
}

std::string Transport::getType() const {
  return type;
}

void Transport::setTonnage(unsigned int tonnage) {
  this->tonnage = tonnage;
}

void Transport::setType(std::string type) {
  this->type = type;
}