#include <iostream>

#include "Calculator.hpp"

using namespace std;

int main() 
{
  double a, b;
  
  cin >> a >> b;
    
  long double *f = sqrt1(a);
  if (f) cout << "Корень: " << *f << endl;
  else cout << "Из отрицательного числа корень выделить нельзя." << endl;
  cout << pow1(a, b) << endl;
  double *n = div(a,b);
  if (n) cout << "Частное: " << *n << endl;
  else cout << "На ноль делить нельзя." << endl;
  cout << multiply(a, b) << endl;
  cout << sum(a, b) << endl;
  cout << sub(a, b) << endl;
}
