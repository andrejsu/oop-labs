#pragma once

#include <iostream>

#include "Vector.h"

class Vector;

class Matrix {
private:
  double **matrix;
  unsigned int h, w;

public:
  Matrix(unsigned int h, unsigned int w);
  ~Matrix();

  unsigned int getH() const;
  unsigned int getW() const;

  void setRand();
  double get(unsigned int i, unsigned int j) const;
  void set(unsigned int i, unsigned int j,double value);

  void print() const;

  friend void f(Vector &vector, Matrix &matrix);
};