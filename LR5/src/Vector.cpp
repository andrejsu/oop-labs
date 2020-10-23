#include "Vector.h"

Vector::Vector(unsigned int size) : size(size) {
  std::cout << "Vector constructor" << std::endl;
  
  vector = new int[size];
  for (int i = 0; i < size; i++) {
    vector[i] = 0;
  }
}

Vector::~Vector() {
  std::cout << "Vector destructor" << std::endl;

  delete [] vector;
}

unsigned int Vector::getSize() const {
  return size;
}

void Vector::setRand() {
  for (int i = 0; i < size; i++) {
    vector[i] = rand() % 9;
  }
  print();
}

int Vector::get(unsigned int i) const {
  return vector[i];
}

void Vector::set(unsigned int i, int value) {
  vector[i] = value;
}

void Vector::print() const {
  std::cout << "---------------------" << std::endl;
  for (int i = 0; i < size; i++) {
    std::cout << vector[i] << "\t";
  }
  std::cout << std::endl << "---------------------" << std::endl << std::endl;
}