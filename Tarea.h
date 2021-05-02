//
// Created by norma on 1/5/2021.
//

#ifndef LISTASIMPLE_TAREA_H
#define LISTASIMPLE_TAREA_H
#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;
class Tarea {
private:
    string Id;
    string detalles;
public:
    Tarea(string Id="indedf", string detalles="undef");

    const string &getId() const;
    const string &getDetalles() const;

    void setId(const string &id);
    void setDetalles(const string &detalles);
    void guardar();
    static Tarea* leer(string x);
    string toString();
};


#endif //LISTASIMPLE_TAREA_H
