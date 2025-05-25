#include <iostream>

long long perimetro(long long base, long long altura){
    int a = 2 * (base + altura);
    return a;
}

int main(){
    long long b;
    long long a;
    std::cin >>b >>a;
    long long resultado = perimetro(b,a);
    std::cout << resultado << std::endl;

    return 0;
}