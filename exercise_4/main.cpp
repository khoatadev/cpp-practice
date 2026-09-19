#include <iostream>

int getValue() {
  int input{};
  std::cin >> input;
  return input;
}

void doubleNumber(int x) { std::cout << "Gap doi: " << x * 2 << "\n"; }

void tripleNumber(int y) { std::cout << "Gap ba: " << y * 3 << "\n"; }

int main() {
  std::cout << "Nhap gia tri: ";
  int value{getValue()};

  doubleNumber(value);
  tripleNumber(value);

  return 0;
}
