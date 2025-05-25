#include <iostream>

double somatorio(int a) {
  double contador = 0;
  for (double i = 1; i < a + 1; i++) {
    double v = 1.0 / i;
    contador += v;
  }
  return contador;
}
int main() {
  int valor;
  std::cin >> valor;
  double resultado = somatorio(valor);
  std::cout << resultado << std::endl;

  return 0;
}