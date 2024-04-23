# include <iostream>
using namespace std;

int main()
{
	//Mensaje de bienvenida 
	cout  << "Hola, este programa 2 unidad 2" << "\n";
	
	//Se declaran los numeros que se sumaran
	float SUELDO, aum, nsue;
	
	//Se  pide el primer numero
	cout << "Por favor ingrese el sueldo:   ";
	
	//Se asigna el primer valor a SUELDO
	cin >> SUELDO;
	
if (SUELDO < 400000.00)
   {
	aum = SUELDO * 0.15;
	nsue = SUELDO + aum;
	}
	
	cout << "El numero sueldo es:  " <<nsue ;
	//Se muestra el resultado
	
	return 0;

}
