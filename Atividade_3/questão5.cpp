#include <iostream>

int primos(int lista[],int n){
    int contagem = 0;
    int list[contagem];
    for (int i = 0; i < n;i++){
        int divisores = 0;
        for (int x = 0; x < n;x++){
            if (i % x == 0){
                divisores +=1
            }
        if (divisores == 2){
            contagem +=1;
            list[i] = i;
        }
    return list;
        }
        
    }
}

int main(){
    int n;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n;i++) {
        std:: cin >> a[i];
    }
    int resultado[] = primos(a,n);
    std:: cout << resultado <<std::endl;

    return 0;

}