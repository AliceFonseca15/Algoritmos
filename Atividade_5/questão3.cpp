#include <iostream>
#include <vector>
#include <cmath> // para std::abs

long long maior_diferenca(const std::vector<long long>& lista, long long q) {
    long long maior = std::abs(lista[1] + lista[0]); //1
    for (long long i = 1; i < q - 1; i++) { //n
        long long dif = std::abs(lista[i + 1] + lista[i]);//n
        if (dif > maior) { //n
            maior = dif; 
        }
    }
    return maior;
}

int main() {
    long long quantidade;
    std::cin >> quantidade; //1

    std::vector<long long> lista(quantidade);
    for (long long i = 0; i < quantidade; i++) {
        std::cin >> lista[i]; //n
    }
    long long resultado = maior_diferenca(lista, quantidade);
    std::cout << resultado << std::endl;

    return 0;
}

