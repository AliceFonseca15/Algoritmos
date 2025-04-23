#include <iostream>

int maior(int v1, int v2){
  if (v1 > v2){
    return v1;
  }else{
    return v2;
  }
}
int menor(int v1, int v2){
  if (v1 < v2){
    return v1;
  }else{
    return v2;
  }
}

int euclides(int v1, int v2){
  int biger = maior(v1,v2);
  int lower = menor(v1,v2);
  int a;
  int result;
  a = biger % lower;
  if (a == 0){
    return lower;
  }else{
    biger = lower;
    lower = a;
    result = euclides(biger,lower);
  return result;
  } 
}

int main(){
  int num1;
  int num2;
  int valor;
  std::cin >> num1 >> num2;
  valor = euclides(num1,num2);
  std::cout << valor<<std::endl;
}
