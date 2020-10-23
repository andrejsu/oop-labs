#pragma once

#include <iostream>

class Rectangle {
private:
  unsigned int a;
  unsigned int b;

public:
  Rectangle();
  Rectangle(unsigned int a, unsigned int b);
  ~Rectangle();

  bool operator!();
  bool operator==(const Rectangle &rectangle);

  unsigned int getA() const;
  unsigned int getB() const;
  
  void setA(unsigned int a);
  void setB(unsigned int b);

  friend unsigned int operator-(const Rectangle &rect);
  friend unsigned int operator+(const Rectangle &rect1, const Rectangle &rect2);
  friend std::ostream& operator<< (std::ostream &out, const Rectangle &rect);
  friend std::istream& operator>> (std::istream &in, Rectangle &rect);
};