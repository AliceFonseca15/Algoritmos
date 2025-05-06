#include <iostream>
#include <string>
#include <chrono>

bool primo(long long n){
    if (n == 1){
        return false;
    }
    if (n == 2){
        return true;
    }
    if (n % 2 == 0){
        return false;
    }
    long long divs = 1;
    for (long long i = 3; i <= n / 2;i++){
        if (n % i == 0){
            divs += 1;
        }
    }
    return divs == 1;
}
int main(){
    long long valor;
    std::cin >> valor;
    auto beg = std::chrono::high_resolution_clock::now();
    bool result = primo(valor);
    auto end = std::chrono::high_resolution_clock::now();
    
    auto dur = end - beg; // Duração do cronômetro
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(dur);
    std::cerr << valor << " Processing time: "
    << duration.count() << " microseconds(s)"<< std::endl;
    
    if (result == true){
        std:: cout << "Primo" <<std::endl;
    }
    else{
        std:: cout << "Não é primo" <<std::endl;
    }    
    return 0;
}