#include <iostream>
#include <vector>

long long repetido(std::vector<long long> & lista){
    long long contador = 0; //1
    for (long long i = 0; i < lista.size(); i++){ //n
        for (long long j = i + 1; j < lista.size(); j++){ //n
            if (lista[i] == lista[j]){ //n^2
                contador += 1; 
            } 
        }
    }
    return contador; //1
} //  n^4 + 2


int main(){
    int quantidade;
    std::cin >> quantidade; //1
    std:: vector<long long>lista(quantidade); 
    for (int i = 0; i < quantidade;i++){ //n
        std::cin >> lista[i]; 
    }
    long long resultado = repetido(lista); //1
    std::cout << "Quantidade de números repetidos:"<< " "<< resultado<<std::endl; //1
   
    return 0; //1
} // n + 4
//Função --> n^4 + n + 6 
// O(n^4)

