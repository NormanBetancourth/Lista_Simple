#include <iostream>
#include <sstream>
#include "Lista.cpp"
#include "Persona.h"
#include <fstream>
int main() {

    cout<<Lista<Persona>::Leer()->toString();
    return 0;
}
