#include <iostream>

#include "Calculator.hpp"

using namespace std;

int main() 
{
  float a, b;
  
  cin >> a >> b;
    
  cout << sqrt1(a) << endl;
  cout << pow1(a, b) << endl;
  cout << div(a, b) << endl;
  cout << multiply(a, b) << endl;
  cout << sum(a, b) << endl;
  cout << sub(a, b) << endl;
}
