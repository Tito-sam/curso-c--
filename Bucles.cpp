#include <iostream>

int main() {

	/*
		Bucles
		Son la base de practicamente todos los lenguajes de programacion,
		ya que permiten realizar muchos tipos de tareas y problemas repetitivos,
		y gracias a esto, se utilizan en muchos tipos de problemas. 

		"While"

		Este es el bucle mas sencillo, aunque se utiliza mucho, por su potencia.
		Su sintaxis es la siguiente:
		while (condicion) {
			<sentencia>
		}
		consiste en ejecutar una sentencia u bloque de codigo, mientras una condicion
		se cumple, y por esta funcion, se logran muchas resoluciones de problemas.

		"do while"

		Es Practicamente el mismo que el anterior, pero primero ejecuta la sentencia y luego
		evalua la condicion, por lo que por lo menos entrara una vez al bloque de codigo.
		Su sintaxis es la siguiente:
		do {
			<sentencia>
		} while (condicion);
		
		"for"
		es el tipo de bucle mas elaborado, se establece desde el inicio cuanto va a durar y como 
		van a ser los pasos.
		La sintaxis es la siguiente:
		for (variable inicial; condicion; incremento) {
			<sentencia>
		}
		
		Antes de la primera iteración se ejecutará la iniciación del bucle, que puede ser una
		expresión o una declaración. En este apartado se iniciarán las variables usadas en el
		bucle. Estas variables pueden ser declaradas en este punto, pero en ese caso tendrán
		validez sólo dentro del bucle "for". Después de cada iteración se ejecutará el
		incremento de las variables del bucle.

	*/
    
	//  Ejemplos
	int i = 0;
	std::cout<<"While"<<std::endl;
	while ( i < 10  )  {
		std::cout<<i++<<std::endl;
	}
	std::cout<<"do While"<<std::endl;
	do {
		std::cout<<++i<<std::endl;
	} while ( i < 20 );

	std::cout<<"for"<<std::endl;
	for (int x = 0; x < 10 ; x++) {
		std::cout<<x<<std::endl;
	}
		
} 
