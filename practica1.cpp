#include <iostream>
#include <string>

void GetPrefix(std::string s) {
  int length = s.length();
  std::cout << "Prefix: { ε, ";
  for (int i = 1; i <= length; i++) {
    std::cout << s.substr(0, i);
    if (i != length) {
      std::cout << ", ";
    }
  }
  std::cout << "}";
  std::cout << "\n";
}

void GetSuffix(std::string s) {
  int length = s.length();
  std::cout << "Suffix: { ε, ";
  for (int i = length - 1; i >= 0; i--) {
    std::cout << s.substr(i, length);
    if (i != 0) {
      std::cout << ", ";
    }
  }
  std::cout << "}";
  std::cout << "\n";
}

int main() {
	std::string s;
  std::cout << "Type the string: ";
  std::getline(std::cin, s);
  GetPrefix(s);
  GetSuffix(s);
}
