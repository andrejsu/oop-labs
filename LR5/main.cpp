#include <cstdlib>
#include <iostream>

#include "src/Matrix.h"
#include "src/Vector.h"

// ========================================================================================
// Описать дружественную функцию, заменяющую все элементы главной диагонали матрицы на 
// соответствующие элементы вектора. Учесть проверку соответствия размерностей.
// ========================================================================================
void f(Vector &vector, Matrix &matrix) {
  int min = matrix.h < matrix.w ? matrix.h : matrix.w;
  if (min != vector.size) {
    std::cout << "The vector does not match the dimension of the matrix!" << std::endl;
    return;
  }
  for (int i = 0; i < min; i++) {
    for (int j = 0; j < min; j++) {
      if (i == j) {
        matrix.matrix[i][j] = static_cast<double>(vector.vector[i]);
      }
    }
  }
  matrix.print();
}

int main() {
  std::cout << "Example with a square matrix" << std::endl;
  Vector vector1(5);
  Matrix matrix1(5, 5);
  vector1.setRand();
  matrix1.setRand();
  f(vector1, matrix1);
  std::cout << std::endl << std::endl;

  std::cout << "Example with a rectangular matrix" << std::endl;
  Vector vector2(5);
  Matrix matrix2(8, 5);
  vector2.setRand();
  matrix2.setRand();
  f(vector2, matrix2);
  std::cout << std::endl << std::endl;

  std::cout << "Example when the vector is less than the matrix" << std::endl;
  Vector vector3(5);
  Matrix matrix3(8, 8);
  vector3.setRand();
  matrix3.setRand();
  f(vector3, matrix3);
  std::cout << std::endl << std::endl;

  return 0;
}