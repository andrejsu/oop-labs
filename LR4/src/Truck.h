#pragma once

#include "Car.h"
#include "Transport.h"

class Truck : public Car, public Transport {
private:
  unsigned int fuelTank;

public:
  Truck(std::string brand, unsigned int power, unsigned int speed,
        unsigned int tonnage, std::string type, unsigned int fuelTank);
  
  ~Truck();

  void info() const;

  unsigned int getFuelTank() const;

  void setFuelTank(unsigned int fuelTank);
};