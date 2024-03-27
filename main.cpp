#include <iostream>
#include "Perro.h"
#include "Propietario.h"

int main() {

    // Instanciar
    Perro* firulais = new Perro(5, "Firulais","Mastin napolitado", "Grande", "negro");

    //Agregar un nuevo pPropietario a Firulais
    firulais->agregarPropietario("Carlos Zapata", "102842313");
    firulais->agregarVeterinario("pedro pascal", 99);

    Propietario* pedro = new Propietario("1040204");

    // Consultar el nombre del pPropietario del perro Firulais
    std::cout<< "El nombre del pPropietario del perro "<<firulais->getNombre() << " es " << firulais->getPropietario()->getNombre()<<std::endl;

    std::cout<< firulais->getPropietario()->mostrarInfo()<< std::endl;

    std::cout << firulais->getPVeterinario()->getNombre()<< " es el veterinario"<<std::endl;

    return 0;
}
