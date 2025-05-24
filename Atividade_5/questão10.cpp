#include <iostream>
#include <string>

long long tempo(long long seg, double massa){
    long long total = 0;
    while (massa > 1.0){
        massa = massa / 2.0;
        total += seg;
    }
    return total;
}

int main(){
    long long segundos;
    std::cin >> segundos;
    double massa;
    std::cin >> massa;
    long long resultado = tempo(segundos,massa);
    std::cout << resultado << "segundo(s)";

    return 0;
}

