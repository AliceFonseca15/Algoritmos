#include <iostream>


struct Fracao {
    int numerador;
    int denominador;
};


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


int mdc(int v1, int v2){
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
    result = mdc(biger,lower);
  return result;
  }
}


int mmc(int a, int b){
  int c = (a * b) / mdc(a,b);
  return c;
}


Fracao simplificar(Fracao f) {
  int div = mdc(f.numerador, f.denominador);
  f.numerador /= div;
  f.denominador /= div;
  return f;
}


Fracao soma(Fracao f1, Fracao f2) {
  int m = mmc(f1.denominador, f2.denominador);


  int num1 = f1.numerador * (m / f1.denominador);
  int num2 = f2.numerador * (m / f2.denominador);


  Fracao resultado;
  resultado.numerador = num1 + num2;
  resultado.denominador = m;


  return simplificar(resultado);
}


int main() {
  Fracao f1, f2, f3;
  std::cin >> f1.numerador >> f1.denominador;
  std::cin >> f2.numerador >> f2.denominador;
  f3 = soma(f1, f2);


  std::cout << f3.numerador << " / " << f3.denominador <<std::endl;


  return 0;
}
