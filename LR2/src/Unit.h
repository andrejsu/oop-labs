#pragma once

#include <string>
#include <iostream>

class Unit {
private:
  std::string name;
  unsigned int health;
  unsigned int damage;

public:
  Unit();
  Unit(std::string name);

  ~Unit();

  void info() const;
  void init();

  void setName(std::string name);
  void setHealth(unsigned int health);
  void setDamage(unsigned int damage);

  std::string getName() const;
  unsigned int getHealth() const;
  unsigned int getDamage() const;
};