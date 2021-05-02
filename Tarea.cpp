//
// Created by norma on 1/5/2021.
//

#include "Tarea.h"

Tarea::Tarea(string Id, string detalles) {
    this->Id=Id;
    this->detalles=detalles;
}

void Tarea::setId(const string &id) {
    Id = id;
}

void Tarea::setDetalles(const string &detalles) {
    Tarea::detalles = detalles;
}

const string &Tarea::getId() const {
    return Id;
}

const string &Tarea::getDetalles() const {
    return detalles;
}

string Tarea::toString() {
    stringstream s;
    s<<"\n\tTarea";
    s<<"\n\tId: "<<getId();
    s<<"\n\tDetalles: "<<getDetalles();

    return s.str();
}

void Tarea::guardar() {
    ofstream c;
    c.open("Tareas.txt",ios::app);
    c << getId() << endl
      << getDetalles() << endl;
    c.close();
}

Tarea *Tarea::leer(string x) {
    ifstream estFile;
    estFile.open("Tareas.txt", ios::in);
    string Id, detalles;
    while (!estFile.eof()){
        if (!(getline(estFile,Id))) { return nullptr; }
        if (!(getline(estFile,detalles))) { return nullptr; }

        if (x==Id) {
            estFile.close();
            return new Tarea(Id, detalles);
        }
    }
    estFile.close();
    return nullptr;
}