#include <iostream>

bool primo(int num, int div){
  int i;
  for (i = 1; i <= num; i++) {
    if (num % i == 0) {
      div += 1;
    }
  }

  if (div == 2) {
    return true; 
  } else {
    return false; 
  }
}

int main() {
  int num;
  int div = 0;
  std::cin >> num;

  bool p = primo(num, div);
  std::cout << p << std::endl;

  return 0;
}
