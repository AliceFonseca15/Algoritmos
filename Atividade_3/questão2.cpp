#include <iostream>

int impares(int list[100]){
  int i;
  int contagem = 0;
  for (i = 0; i < 100;i++){
    if (list[i] % 2 != 0){
      contagem += 1;
    }
  return contagem;
  }
}

int main(){
  int lista[100];
  std::cin >> lista;
  int impar = impares(lista[]);
  std:: cout << impar << std::endl;
  
}