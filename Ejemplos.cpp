#include <iostream>

using namespace std;

int main() {
    /*
    Ejemplo 1
    Primero haremos uno fácil. Escribir un programa que muestre una lista de números del 1 al 20, 
    indicando a la derecha de cada uno si es divisible por 3 o no.
    */
    int i;

    for (i = 1; i <= 20; i++) {
        cout << i;
        if (i%3==0) {
            cout << " es multiplo de 3"<<endl;
        } else {
            cout<<" No es multiplo de 3"<<endl;
        }
    }
    

    return 0;
}