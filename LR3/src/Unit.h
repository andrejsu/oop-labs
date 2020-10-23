#pragma once

#include <iostream>

class Unit {
public:
  Unit();
  virtual ~Unit();
  
  virtual void info() = 0;
};