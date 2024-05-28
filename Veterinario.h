//
// Created by anton on 26/03/2024.
//

#ifndef INC_3_CREAROBJASOCIACION_VETERINARIO_H
#define INC_3_CREAROBJASOCIACION_VETERINARIO_H

#include "iostream"

class Veterinario {

private:
    std::string nombre;
    int aniosDeExperiencia;

public:

    Veterinario();
    Veterinario(std::string name, int yearsOfExperience);

    std::string &getNombre();

    void setNombre(std::string nombre);

    int getAniosDeExperiencia();

    void setAniosDeExperiencia(int aniosDeExperiencia);

};


#endif //INC_3_CREAROBJASOCIACION_VETERINARIO_H
