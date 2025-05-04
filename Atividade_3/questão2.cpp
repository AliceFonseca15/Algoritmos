#include <iostream>

int impares(int lista[], int n) {
    int contagem = 0;
    for (int i = 0; i < n; i++) {
        if (lista[i] % 2 != 0) {
            contagem += 1;
        }
    }
    return contagem;
}
int main() {
    int n;
    std::cin >> n;
    int lista[n];

    for (int i = 0; i < n; i++) { 
        std::cin >> lista[i];
    }

    int impar = impares(lista, n);
    std::cout << impar << std::endl;
    return 0;
}