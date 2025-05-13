#include <iostream>

long long maior_diferenca (long long lista[], long long q) {
    long long maior = lista[0] + lista[1];
    for (long long i = 2; i <= q;i++){
        if ((lista[i] - 1) + i > maior){
            maior = (lista[i] - 1) + i;
        }
    }
    return maior;
}

int main(){
    long long quantidade; // 1
    long long lista[quantidade]; //n
    std::cin >> quantidade; //1
    for (long long i = 0; i < quantidade;i++){
        std::cin >> lista[i];
    }
    long long resultado = maior_diferenca(lista, quantidade);
    std::cout << resultado <<std::endl;

    return 0;
}