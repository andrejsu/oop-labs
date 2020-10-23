#pragma once

#include <iostream>

template <typename T>
class Matrix {
private:
  T **matrix;
  unsigned int h, w;

public:
  Matrix(unsigned int h, unsigned int w);
  ~Matrix();

  void setRand();
  void swapRow(unsigned int i, unsigned int j);
  void set(unsigned int i, unsigned int j, T value);
  T get(unsigned int i, unsigned int j) const;
  void print() const;

  unsigned int getH() const;
  unsigned int getW() const;
};

template <typename T>
Matrix<T>::Matrix(unsigned int h, unsigned int w) : h(h), w(w) {
  std::cout << "Matrix constructor" << std::endl;

  matrix = new T *[h];
  for (int i = 0; i < h; i++) {
    matrix[i] = new T[w];
  }
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      matrix[i][j] = 0;
    }
  }
}

template <typename T>
Matrix<T>::~Matrix() {
  std::cout << "Matrix destructor" << std::endl;

  for (int i = 0; i < h; i++) {
    delete [] matrix[i];
  }
}

template <typename T>
void Matrix<T>::setRand() {
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      matrix[i][j] = rand() % 9;
    }
  }
}

template <typename T>
void Matrix<T>::swapRow(unsigned int i, unsigned int j) {
  for (int k = 0; k < w; k++) {
    T temp = matrix[i][k];
    matrix[i][k] = matrix[j][k];
    matrix[j][k] = temp;
  }
}

template <typename T>
void Matrix<T>::set(unsigned int i, unsigned int j, T value) {
  matrix[i][j] = value;
}

template <typename T>
T Matrix<T>::get(unsigned int i, unsigned int j) const {
  return matrix[i][j];
}

template <typename T>
void Matrix<T>::print() const {
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