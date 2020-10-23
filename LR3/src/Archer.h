#pragma once

#include <string>

#include "Unit.h"

class Archer : public Unit {
private:
  std::string name;

public:
  Archer();
  Archer(std::string name);
  ~Archer();

  void setName(std::string name);
  std::string getName() const;
  
  void info();
};