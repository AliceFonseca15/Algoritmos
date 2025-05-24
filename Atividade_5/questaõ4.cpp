#include <iostream>
#include <vector>
#include <cmath> // para std::abs

bool soma(const std::vector<long long>& lista, long long q,long long valor) {
    for (long long i = 0; i < q; i++){ //n
        for (long long j = 0; j < q; j++){ //*n
            if (lista[i] + lista[j] == valor) //n
                return true;
        }
    }
    return false;
    
}

int main() {
    long long quantidade;
    std::cin >> quantidade; //1

    std::vector<long long> lista(quantidade);
    for (long long i = 0; i < quantidade; i++) {
        std::cin >> lista[i]; //n
    }
    long long valor;
    std:: cin >> valor;
    bool resultado = soma(lista,quantidade,valor);
    if (resultado == true){ //1
        std::cout << "S" << std::endl;
    }
    if (resultado == false){ //1
        std::cout << "N" << std::endl;
    }

    return 0;
}