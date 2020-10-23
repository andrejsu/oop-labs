#include "Matrix.h"

Matrix::Matrix(unsigned int h, unsigned int w) : h(h), w(w) {
  std::cout << "Matrix constructor" << std::endl;
  
  matrix = new double*[h];
  for (int i = 0; i < h; i++) {
    matrix[i] = new double[w];
  }
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      matrix[i][j] = 0.0;
    }
  }
}

Matrix::~Matrix() {
  std::cout << "Matrix destructor" << std::endl;
  
  for (int i = 0; i < h; i++) {
    delete [] matrix[i];
  }
  delete [] matrix;
}

unsigned int Matrix::getH() const {
  return h;
}

unsigned int Matrix::getW() const {
  return w;
}

void Matrix::setRand() {
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      matrix[i][j] = rand() % 9;
    }
  }
  print();
}

double Matrix::get(unsigned int i, unsigned int j) const {
  return matrix[i][j];
}

void Matrix::set(unsigned int i, unsigned int j, double value) {
  matrix[i][j] = value;
}

void Matrix::print() const {
  std::cout << "---------------------" << std::endl;
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++) {
      std::cout << matrix[i][j] << "\t";
    }
    std::cout << std::endl;
  }
  std::cout << "---------------------" << std::endl << std::endl;
}