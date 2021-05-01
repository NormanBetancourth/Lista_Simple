#include <iostream>
#include <sstream>
#include "Lista.cpp"
#include "Persona.h"
int main() {
    Lista<Persona> * L = new Lista<Persona>();
    Persona * P1=new Persona("Noman", "1", 19);
    Persona * P2=new Persona("Allen", "2", 29);
    Persona * P3=new Persona("Perla", "3", 21);
    Persona * P4=new Persona("Yorle", "4", 24);

    L->agregarFinal(P4);
    L->agregarFinal(P2);
    L->agregarFinal(P3);
    L->agregarFinal(P1);
    cout<<L->toString();
    cout<<"-----------------------"<<endl;
    L->ordenarLista();
    cout<<L->toString();


    return 0;
}
