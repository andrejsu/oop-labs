#include <iostream>

#include "src/Matrix.h"

int main() {
  Matrix<int> matrix1(5, 5);
  matrix1.setRand();
  std::cout << "Swap line 3 to line 4" << std::endl;
  matrix1.print();
  matrix1.swapRow(2, 3);
  matrix1.print();

  Matrix<double> matrix2(5, 5);
  matrix2.setRand();
  std::cout << "Swap line 1 to line 5" << std::endl;
  matrix2.print();
  matrix2.swapRow(0, 4);
  matrix2.print();

  return 0;
}