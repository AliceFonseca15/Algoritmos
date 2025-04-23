#include <iostream>

int menor(int n1, int n2){
  if (n1 < n2){
    return n1;
  }else{
    return n2;
  }
}

bool primo_entre_si(int num1, int num2){
  int valor = menor(num1,num2);
  int i;
  int div;
  div = 0;
  for (i = 1; i <= valor;i++){
    if (num1 % i == 0  and num2 % i == 0){
      div += 1;
    }
  }
  if (div >= 2){
    return false;
  }else{
    return true;
  }
  
}

int main(){
  int numero1;
  int numero2;
  bool result;
  std:: cin >> numero1 >> numero2;
  result = primo_entre_si(numero1,numero2);
  std::cout << result << std::endl;
  return 0;
}
