#include <iostream>
#include <iomanip>

<<<<<<< HEAD
=======

>>>>>>> 6d206171aed80b52b90d670981c5c6333ebbdf5a
float area(float diametro){
  float r = diametro / 2;
  float a = 3.14159 * (r * r);
  return a;
}
int main(){
  float diametro;
  std:: cin >> diametro;
  float result = area(diametro);
  std:: cout << std::fixed <<std::setprecision(5) << result;
<<<<<<< HEAD
  return 0;         

}
=======
  return 0;        

}
>>>>>>> 6d206171aed80b52b90d670981c5c6333ebbdf5a
