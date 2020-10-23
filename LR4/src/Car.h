#pragma once

#include <string>
#include <iostream>

class Car {
private:
  std::string brand;
  unsigned int power;
  unsigned int speed;

public:
  Car(std::string brand, unsigned int power, unsigned int speed);
  ~Car();

  void info() const;

  std::string getBrand() const;
  unsigned int getPower() const;
  unsigned int getSpeed() const;

  void setBrand(std::string brand);
  void setPower(unsigned int power);
  void setSpeed(unsigned int speed);
};