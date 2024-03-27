//
// Created by lufe y Gonzo Feb2024.
//

#include "Propietario.h"

//TODO Agrege el constructor por defecto y agrege un constructor con dos parametros

Propietario::Propietario(std::string docIdentidad) {
    this->docIdentidad = docIdentidad;
}


Propietario::Propietario(std::string nombre, std::string docIdentidad) {
 this->nombre = nombre;
 this->docIdentidad = docIdentidad;
}

std::string Propietario::getNombre()  {
    return nombre;
}

void Propietario::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Propietario::setEdad(int edad) {
    Propietario::edad = edad;
}

int Propietario::getEdad() const {
    return edad;
}

std::string Propietario::mostrarInfo(){
    std::string ans = "name "+ nombre + "\n" + "age " + std::to_string(edad) + " \n" + "id " + docIdentidad;

    return ans;
}
