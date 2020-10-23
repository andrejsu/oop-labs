#include <iostream>

#include "src/Truck.h"

int main() {
  Truck obj("MAN", 750, 150, 20, "Freight", 400);
  obj.info();
  obj.Car::info();
  obj.Transport::info();
  
  return 0;
}