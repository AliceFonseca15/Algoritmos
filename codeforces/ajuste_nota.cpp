#include <iostream>
int ajuste_nota(float nota_max, float nota){
    int a = (100 * nota) / nota_max;
    return a;
}

int main(){
    float nota_max;
    std::cin >> nota_max;
    float nota;
    std::cin >> nota;
    int resultado = ajuste_nota(nota_max,nota);
    std::cout << resultado << std::endl;

    return 0;
}