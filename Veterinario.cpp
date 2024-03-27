//
// Created by anton on 26/03/2024.
//

#include "Veterinario.h"

Veterinario::Veterinario(std::string name, int yearsOfExperience) {
    this->nombre = name;
    this->aniosDeExperiencia = yearsOfExperience;
}

std::string &Veterinario::getNombre(){
    return nombre;
}

void Veterinario::setNombre(std::string nombre) {
    Veterinario::nombre = nombre;
}

int Veterinario::getAniosDeExperiencia(){
    return aniosDeExperiencia;
}

void Veterinario::setAniosDeExperiencia(int aniosDeExperiencia) {
    Veterinario::aniosDeExperiencia = aniosDeExperiencia;
}
