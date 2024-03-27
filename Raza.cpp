//
// Created by anton on 26/03/2024.
//

#include "Raza.h"

Raza::Raza(std::string nombre, std::string paisDeOrigen) {
    this->nombre = nombre;
    this->paisDeOrigen = paisDeOrigen;
}

std::string Raza::getNombre(){
    return nombre;
}

void Raza::setNombre(std::string &nombre) {
    Raza::nombre = nombre;
}

std::string Raza::getPaisDeOrigen() {
    return paisDeOrigen;
}

void Raza::setPaisDeOrigen(std::string &paisDeOrigen) {
    Raza::paisDeOrigen = paisDeOrigen;
}
