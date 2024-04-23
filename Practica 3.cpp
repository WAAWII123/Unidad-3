#include <iostream>

using namespace std;

int main ()
{
	//Mensaje de bienvenida
	cout << "Hola, este es la practica 3"  << "\n";
	
	//Se declaran los numeros que se sumaran
	float NOTA;
	
	//Se pide el primer numero 
	cout << "Por favor ingrese la calificacion:  ";
	
	//Se asigna el primer valor a NOTA
	cin >> NOTA;
	
    if (NOTA>=3.0)
                cout << "Aprobado" ;
       else 
                cout<< "Reprobado";
    
	//Se muestra el resultado
	
	return 0;

}
