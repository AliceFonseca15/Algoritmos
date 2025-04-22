#include <iostream>
#include <iomanip>

int postes(int metros,int distancia){
  int contagem = 0;
  int m = 0;
   while(m <= metros){
     m += distancia;
     contagem += 1;
   }
     return contagem;
  }

int main(){
    int metros;
    int distancia;
    int d_final;
    int v_final;
    std:: cin >> metros >> distancia;
    int result = postes(metros,distancia);
    std:: cout << result <<std::endl;
    if (metros * (result - 1) < metros){
      d_final = metros * (result - 1);
      v_final = metros - d_final;
      std::cout << v_final << std::endl; 
      result += 1;
    }
    else{
      std::cout << distancia <<std::endl;
    }
    return 0;
}
