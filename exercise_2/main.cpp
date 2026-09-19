#include <iostream>

int getInteger() {
  int input{};
  std::cin >> input;
  return input;
}

void add(int x, int y) { std::cout << "Tổng:" << x + y; }

void subtract(int x, int y) { std::cout << "Hiệu:" << x - y; }

int main() {
  std::cout << "Nhap mot so nguyen";
  int a{getInteger()};
  std::cout << "Nhap mot so nguyen khac";
  int b{getInteger()};

  add(a, b);
  subtract(a, b);

  return 0;
}
