#include <iostream>

int main() {
    /*
    Sentencias de salto
    Este tipo de sentencias sirve para manejar el flujo del programa a la hora de ejecutarse,
    su labor se ve mayormente reflejada en los condicionales, ya que cortan flujo o saltan partes
    de codigo.

    sentencia "break"
        Esta funciona para romper y finalizar el flujo de un bloque de codigo, en general se utilizan
        en los bloques de condicion, con if...else o switch, y salta a la proxima sentencia u bloque
        que haya en el codigo.
        se utiliza asi:
            break;

    sentencia "continue"
        Esta funciona para saltar un ciclo dentro del bloque de ciclo total, entonces si se genera
        una condicion y se entra en un punto donde se encuentre esta sentencia, se saltara todo lo que
        queda de codigo y volvera a comenzar el ciclo en el siguiente paso.
        Se utiliza asi:
            continue;

    sentencia "goto"
        Esta sentencia transfiere el control donde este el identificador utilizado, esta sentencia
        casi no se usa y se encuntra en guerra constante con la programacion estructurada.
        Este en general se puede reaizar con otras funcionalidades que encontramos en el lenguaje.
        Su sintaxis es la siguiente:
            goto <identificador>;
    
    sentencia de retorno "return"
        Esta sentencia sirve para retornar algun valor o dato de alguna funcion en donde tiene
        que retornar un valor.
        Su sintaxis es:
            return <valor>;
    
    */

    //Ejemplos 

    int x = 10;
    while (x > 1) {
        if (x == 2) {
            std::cout<<x<<std::endl;
            continue;
            x = 100;
        }
        std::cout<<"Ha entrado a esta parte de codigo"<<std::endl;
        if (x == 100) {
            std::cout<<"Se ha acabado el ciclo"<<std::endl;
            break;
        }
    }    

    return 0;
}