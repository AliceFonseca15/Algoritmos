#include <iomanip>
#include <iostream>

int postes(int metros, int distancia) {
  int poste = metros / distancia;
  return poste;
}

int d_final(int metros, int distancia, int poste) {
  int v_final = metros - (distancia * poste);
  return v_final;
}

int main() {
  int metros;
  int distancia;
  int m_final;
  int poste;
  std::cin >> metros >> distancia;
  poste = postes(metros, distancia);
  m_final = d_final(metros, distancia, poste);
  std::cout << (poste + 2)<< std::endl;
  std::cout << m_final << std::endl;
  return 0;
}
