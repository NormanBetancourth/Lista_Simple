//
// Created by rebec on 30/4/2021.
//

#include "Vector.h"

template<class T>
Vector<T>::Vector(int tamano) {
    can = 0;
    tam = tamano;
    vector = new T * [tam];
    for (int i = 0; i < tam; i++) {
        vector[i] = nullptr;
    }
}

template<class T>
Vector<T>::~Vector() {
    for (int i = 0; i < getCantidad(); i++) {
        if (vector[i]) {
            delete vector[i];
        }
    }
    delete[] vector;
    setCantidad(0);
}

template<class T>
int Vector<T>::getCantidad() {
    return can;
}

template<class T>
void Vector<T>::setCantidad(int can) {
    this->can = can;
}

template<class T>
int Vector<T>::getTamano() {
    return tam;
}

template<class T>
string Vector<T>::toString() {
    stringstream s;
    for (int i = 0; i < getCantidad(); i++) {
        if (vector[i] != nullptr) {
            s << "-" << vector[i]->toString() << "\n\n";
        }
    }
    return s.str();
}

template<class T>
void Vector<T>::vaciarVector() {
    for (int i = 0; i < getTamano(); i++) {
        if (vector[i]) {
            delete vector[i];
        }
    }
    setCantidad(0);
}

template<class T>
void Vector<T>::corrimientoVector(int posicion) {
    for (int i = posicion; i < getCantidad(); i++) {
        vector[i] = vector[i + 1];
    }
    vector[getCantidad()- 1] = nullptr;
}

template<class T>
void Vector<T>::eliminar(string id) {
    if (extiste(id)) {
        for (int i = 0; i < getCantidad(); i++) {
            if (vector[i]->getCedula() == id) {
                delete vector[i];
                corrimientoVector(i);
                setCantidad(getCantidad() - 1);
            }
        }
    }
}

template<class T>
bool Vector<T>::ingresar(T * cosa) {
    if (getCantidad() < getTamano()) {
        if (this->extiste(cosa->getId()) == false) {
            vector[can++] = cosa;
            return true;
        }
    }
    return false;
}

template<class T>
bool Vector<T>::extiste(string id) {
    for (int i = 0; i < getCantidad(); i++) {
        if (vector[i]->getId() == id) {
            return true;
        }
    }
    return false;
}

template<class T>
T *Vector<T>::buscar(string id) {
    for (int i = 0; i < getCantidad(); i++) {
        if (vector[i]->getId() == id) {
            return vector[i];
        }
    }
    return nullptr;
}