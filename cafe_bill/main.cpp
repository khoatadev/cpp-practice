#include <iostream>

int cafe = 25000;
int tra_dao {30000};

int main()
{
  int sl_cafe{};
  int sl_tra_dao{};

  std::cout <<"Nhap so ly cafe:";
  std::cin >> sl_cafe;
  std::cout <<"Nhap so ly tra dao:";
  std::cin >> sl_tra_dao;

  std::cout <<"===== HOA DON THANH TOAN =====\n";
  std::cout << "1. Cafe:" << sl_cafe << "=>" << cafe * sl_cafe << "\n";
  std::cout << "2. tra_dao:" << sl_tra_dao << "=>" << tra_dao * sl_tra_dao << "\n";
  std::cout << "---------------------------------------\n";
  return 0; 
}
