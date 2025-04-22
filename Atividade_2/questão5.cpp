#include <iostream>


int divisores(int numero, int divisor) {
  int divisores = 0;
  while (divisor <= numero) {
    if (numero % divisor == 0) {
      divisores += 1;
    }
  }
  return divisores;
}

int main() {
  int numero;
  int divisor;
  std::cin >> numero;
  divisor = 1;
  int result = divisores(numero, divisor);
  std::cout << result << std::endl;
  return 0;
}
