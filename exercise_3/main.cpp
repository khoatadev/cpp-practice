#include <iostream>

int getValue() {
  int value{};
  std::cin >> value;
  return value;
}

void chu_vi(int x, int y) { std::cout << "Chu vi la: " << (x + y) * 2 << "\n"; }

void dien_tich(int x, int y) { std::cout << "dien tich la: " << x * y << "\n"; }

int main() {
  std::cout << "Nhap chieu dai: ";
  int length{getValue()};
  std::cout << "Nhap chieu rong: ";
  int width{getValue()};

  chu_vi(length, width);
  dien_tich(length, width);

  return 0;
}
