#pragma once

#include <string>
#include <iostream>

class Transport {
private:
  unsigned int tonnage;
  std::string type;

public:
  Transport(unsigned int tonnage, std::string type);
  ~Transport();

  void info() const;

  unsigned int getTonnage() const;
  std::string getType() const;

  void setTonnage(unsigned int tonnage);
  void setType(std::string type);
};