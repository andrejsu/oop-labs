#include "Truck.h"

Truck::Truck(std::string brand, unsigned int power, unsigned int speed,
             unsigned int tonnage, std::string type, unsigned int fuelTank) : Car(brand, power, speed),
                                                                              Transport(tonnage, type), fuelTank(fuelTank)
{
  std::cout << "Truck constructor" << std::endl;
}

Truck::~Truck() {
  std::cout << "Truck destructor" << std::endl;
}

void Truck::info() const {
  std::cout << "============== Truck info ==============" << std::endl;
  std::cout << "Fuel tank: " << fuelTank << std::endl;
}

unsigned int Truck::getFuelTank() const {
  return fuelTank;
}

void Truck::setFuelTank(unsigned int fuelTank) {
  this->fuelTank = fuelTank;
}