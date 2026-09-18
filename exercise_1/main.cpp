#include <iostream>

using namespace std;

int main() {
  int a{};
  int b{};

  cout << "Nhập một số nguyên:";
  cin >> a;
  cout << "Nhập số nguyên khác:";
  cin >> b;

  cout << a << "+" << b << "=" << a + b << "\n";
  cout << a << "-" << b << "=" << a - b;

  return 0;
}
