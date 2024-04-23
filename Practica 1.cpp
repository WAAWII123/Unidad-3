#include <iostream>

using namespace std;


int main()
{
	//Mensaje de Bienvenida
	cout << "Hola :) Este programa 1 unidad 2";
	
	//Se declaram los numeros que se sumaron (pueden ser decimales)
	float NOTA;
	
	//Se pide el perimer numero
	cout << "Por favor ingrese la calificacion:";
	
	//Se asigna el primer valr de NOTA
	cin >> NOTA;
	
	if(NOTA<3.0){
		cout << "Reprobado" ;
	} 
	
	return 0;
}

