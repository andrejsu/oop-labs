#include "Unit.h"

Unit::Unit() : name(""), health(0), damage(0) {
  std::cout << "Unit constructor" << std::endl;
}

Unit::Unit(std::string name) : name(name), health(0), damage(0) {
  std::cout << "Unit constructor" << std::endl;
}

Unit::~Unit() {
  std::cout << "Unit destructor" << std::endl;
}

void Unit::info() const {
  std::cout << std::endl;
  std::cout << "======== Info ========" << std::endl;
  std::cout << "Name: " << this->name << std::endl;
  std::cout << "Health: " << this->health << std::endl;
  std::cout << "Damage: " << this->damage << std::endl;
}

void Unit::init() {
  std::cout << "Initialization..." << std::endl;
  std::cout << "Name: ";
  std::cin >> this->name; 
  std::cout << "Health: ";
  std::cin >> this->health; 
  std::cout << "Damage: ";
  std::cin >> this->damage;
}

void Unit::setName(std::string name) {
  this->name = name;
}

void Unit::setHealth(unsigned int health) {
  this->health = health;
}

void Unit::setDamage(unsigned int damage) {
  this->damage = damage;
}

std::string Unit::getName() const {
  return name;
}

unsigned int Unit::getHealth() const {
  return health;
}

unsigned int Unit::getDamage() const {
  return damage;
}