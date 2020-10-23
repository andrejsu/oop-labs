#include "Car.h"

Car::Car(std::string brand, unsigned int power, unsigned int speed) : brand(brand), power(power), speed(speed) {
  std::cout << "Car constructor" << std::endl;
}

Car::~Car() {
  std::cout << "Car destructor" << std::endl;
}

void Car::info() const {
  std::cout << "============== Car info ==============" << std::endl;
  std::cout << "Brand: " << brand << std::endl;
  std::cout << "Power: " << power << std::endl;
  std::cout << "Speed: " << speed << std::endl;
}

std::string Car::getBrand() const {
  return brand;
}

unsigned int Car::getPower() const {
  return power;
}

unsigned int Car::getSpeed() const {
  return speed;
}

void Car::setBrand(std::string brand) {
  this->brand = brand;
}

void Car::setPower(unsigned int power) {
  this->power = power;
}

void Car::setSpeed(unsigned int speed) {
  this->speed = speed;
}