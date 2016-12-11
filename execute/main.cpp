#include <iostream>

#include "Calculator.hpp"

using namespace std;

int main() 
{
  float a, b;
  
  cin >> a >> b;
    
  cout << sqrt1(a) << endl;
  cout << pow1(a, b) << endl;
  double *n = div(a,b);
  if (n) cout << "Частное: " << *n << endl;
  else cout << "На ноль делить нельзя." << endl;
  cout << multiply(a, b) << endl;
  cout << sum(a, b) << endl;
  cout << sub(a, b) << endl;
}
