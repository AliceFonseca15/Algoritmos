#include <iostream>
#include <string>

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
    
    bool p = true;
    long long d = 3;
    
    while (p and d <= n / 2){
        if (n % d == 0){
            p = false;
        }
    d += 2;
    }
    return p;
} 

int main(){
    long long valor;
    std::cin >> valor;
    bool result = primo(valor);

    if (result == true){
        std:: cout << "Primo" <<std::endl;
    }
    else{
        std:: cout << "Não é primo" <<std::endl;
    }    
    return 0;
    
}