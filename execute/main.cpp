#include <iostream> 
#include "calculator.hpp"
using namespace std;

int main() {
	int a, b;
	cout << "Enter a,b:";
	cin >>a;
	cin >>b;
	cout << "Sum:" << sum(a, b) << endl;
	cout << "Division:" << div(a, b) << endl;
	cout << "Multiplication:" << multiply(a, b) << endl;
	try {
		cout <<"Substraction:"<<sub(a,b)<<endl;
	}
	catch (char *Err)
	{
		cout << Err << endl;
	}
   try {
		cout << "Pow a to b: " << pow1(a, b) << endl;
	}
	catch (int i)
	{
		cout << "Pow a to b:" << i << endl;
	}
	try{
	cout << "Sqrt a: " << sqrt1(a) << endl;
	}
	catch (char *Errr)
	{
		cout<<Errr<<endl;
	}
	
	return 0;

}

    Contact GitHub API Training Shop
