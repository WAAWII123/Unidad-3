#include <iostream>
using namespace std;

int main ()
{
	cout << "Practica 5"  << "\n";
	int num;

    cout << "Escribe un numero " <<"\n";
    cin>>num;
    
    if (num % 2 ==0)   cout << "El numero es par";
       else 
    
	if (num %3==0)   cout << "El numero es impar y es divisible por 3"; 
	         else cout << "El numero es impar y es no divisible entre 3";

}
