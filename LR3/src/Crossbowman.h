#pragma once

#include "Archer.h"

class Crossbowman : public Archer {
private:
  unsigned int actionRadius;

public:
  Crossbowman();
  Crossbowman(std::string name, unsigned int actionRadius);

  ~Crossbowman();

  void info();
  
  void setActionRadius(unsigned int actionRadius);
  unsigned int getActionRadius() const;
};