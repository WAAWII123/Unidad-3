#include <iostream>
using namespace std;

int main()
{
	//mensaje de bienvenida
	cout << "Practica 4" << "\n";
	
	//Se declaran los numeros que se sumaran 
	float Sueldo, aum, nsue;
	
	//Se pide el primer numero
	cout << "Por favor ingrese el sueldo:  ";
	
	//Se asigna el primer valor a sueldo
	cin >> Sueldo;
	
if (Sueldo < 400000.00)
      {
      	aum = Sueldo * 0.15;
      	nsue = Sueldo + aum;
      }
   else
       nsue= Sueldo*1.08;
       
   cout << "El nuevo saldo es:  " <<nsue ;
   //Se muestra el resultado
   
   return 0;
   
}
