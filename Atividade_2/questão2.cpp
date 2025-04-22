#include <iostream>

int perimetro(int altura, int largura){
    int valor = 2 * (altura + largura);
    return valor;
}

int main(){
    int altura,largura;
    std::cin >> altura >> largura;
    int resultado = perimetro(altura,largura);
    std::cout << resultado<<::endl;
    return 0;

}