#include <iostream>

#include "Calculator.hpp"

using namespace std;

int main() 
{
  float a, b;
  
  cin >> a >> b;
    
  cout << sqrt(a) << endl;
  cout << pow(a, b) << endl;
  cout << div(a, b) << endl;
  cout << multiply(a, b) << endl;
  cout << sum(a, b) << endl;
  cout << sub(a, b) << endl;
}
