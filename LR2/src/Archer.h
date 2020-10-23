#pragma once

#include "Unit.h"

class Archer : public Unit {
private:
  unsigned int actionRadius;

public:
  Archer();
  Archer(std::string name);

  ~Archer();

  void info() const;
  void init();
  bool isAlive() const;
  void printIsAlive() const;

  void setActionRadius(unsigned int actionRadius);
  unsigned int getActionRadius() const;
};