#pragma once

#include <iostream>

class Matrix;

class Vector {
private:
  int *vector;
  unsigned int size;

public:
  Vector(unsigned int size);
  ~Vector();

  unsigned int getSize() const;

  void setRand();
  int get(unsigned int i) const;
  void set(unsigned int i, int value);
  void print() const;

  friend void f(Vector &vector, Matrix &matrix);
};