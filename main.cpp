#include <iostream>
#include <sstream>
#include "Lista.h"
int main() {
    Lista *L =new Lista();

    Persona* P1 =new Persona(1,"Norman");
    Persona* P2 =new Persona(2,"perla");
    Persona* P3 =new Persona(3,"fabi");
    Persona* P4 =new Persona(4,"allen");
    Persona* P5 =new Persona(5,"jose");


    L->agregarFinal(P5);
    L->agregarFinal(P1);
    L->agregarFinal(P3);
    L->agregarFinal(P4);
    L->agregarFinal(P2);

    cout<<L->toString();
    cout<<L->cuentaNodos();
    L->ordenarLista();
    L->eliminarEspecifico("perla");
    cout<<L->toString();









    return 0;
}
