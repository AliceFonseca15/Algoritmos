#include <iostream>
#include <vector>

void conta_pares(int a[], int n, int pares[], int& qtd_pares) {
    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 0) {
            pares[qtd_pares] = a[i];
            qtd_pares = qtd_pares + 1;
        }
    }
}

void positivos(int a[], int n, std::vector<int>& positive) {
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            positive.push_back(a[i]);
        }
    }
}

void negativos(int a[], int n, std::vector<int>& negative) {
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            negative.push_back(a[i]);
        }
    }
}
int main() {
    int n, qtd_pares = 0;
    std::cin >> n;
    int a[n], pares[n];

    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    conta_pares(a, n, pares, qtd_pares);

    std::cout << qtd_pares << std::endl;


    std::vector<int> positive, negative;

    positivos(a, n, positive);
    negativos(a, n, negative);

    std::cout << "Positivos: ";
    for (int num : positive) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Negativos: ";
    for (int num : negative) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
