//
// Created by anton on 26/03/2024.
//

#ifndef INC_3_CREAROBJASOCIACION_RAZA_H
#define INC_3_CREAROBJASOCIACION_RAZA_H

#include "iostream"

class Raza {
private:
    std::string nombre;
    std::string paisDeOrigen;
public:
    Raza();
    Raza(std::string nombre, std::string paisDeOrigen);

    std::string getNombre();

    void setNombre(std::string &nombre);

    std::string getPaisDeOrigen();

    void setPaisDeOrigen(std::string &paisDeOrigen);
};


#endif //INC_3_CREAROBJASOCIACION_RAZA_H
