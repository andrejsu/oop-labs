#include <iostream>

#include "src/Rectangle.h"

int main() {
  Rectangle rect1;
  Rectangle rect2(1, 16);

  std::cin >> rect1;

  std::cout << rect1 << std::endl;
  std::cout << rect2 << std::endl;

  if (!rect1) {
    std::cout << "Rect1 is square" << std::endl;
  } else {
    std::cout << "Rect1 is rectangle" << std::endl;
  }

  std::cout << "Length difference: " << -rect1 << std::endl;

  if (rect1 == rect2) {
    std::cout << "Areas are equal" << std::endl;
  } else {
    std::cout << "Areas are not equal" << std::endl;
  }

  std::cout << "Sum of areas: " << rect1 + rect2 << std::endl;

  return 0;
}