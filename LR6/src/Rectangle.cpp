#include "Rectangle.h"

Rectangle::Rectangle() : a(0), b(0) {
  std::cout << "Rectangle constructor" << std::endl;
}

Rectangle::Rectangle(unsigned int a, unsigned int b) : a(a), b(b) {
  std::cout << "Rectangle constructor" << std::endl;
}

Rectangle::~Rectangle() {
  std::cout << "Rectangle destructor" << std::endl;
}

bool Rectangle::operator!() {
  return (a == b);
}

bool Rectangle::operator==(const Rectangle &rectangle) {
  return a * b == rectangle.a * rectangle.b;
}

unsigned int Rectangle::getA() const {
  return a;
}

unsigned int Rectangle::getB() const {
  return b;
}
  
void Rectangle::setA(unsigned int a) {
  this->a = a;
}

void Rectangle::setB(unsigned int b) {
  this->b = b;
}

unsigned int operator-(const Rectangle &rect) {
  return rect.a > rect.b ? rect.a - rect.b : rect.b - rect.a; 
}

unsigned int operator+(const Rectangle &rect1, const Rectangle &rect2) {
  return rect1.a * rect1.b + rect2.a * rect2.b; 
}

std::ostream& operator<<(std::ostream &out, const Rectangle &rect) {
    out << "Rectangle(" << rect.a << ", " << rect.b << ")";
    return out;
}
 
std::istream& operator>> (std::istream &in, Rectangle &rect) {
    in >> rect.a >> rect.b;
    return in;
}