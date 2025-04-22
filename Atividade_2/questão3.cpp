#include <iostream>
#include <iomanip>

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
  return 0;         

}