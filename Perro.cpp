#include "Perro.h"
#include <iostream>


// Ejemplo de constructor por defecto con lista inicializadora
// Perro::Perro() : edad(0), raza(""), tamanio(""), color("") {}

// Ejemplo de constructor por defecto iniciando los atributos en el cuerpo del constructor
Perro::Perro(int edad,std::string nombre, std::string raza, std::string tamanio, std::string color) {
    this->edad = edad;
    this->raza = raza;
    this->tamanio = tamanio;
    this->color = color;
    this->nombre = nombre;
}

void Perro::ladrar() {
    std::cout << "Guau Guau" << std::endl;
}

void Perro::agregarPropietario(std::string nombre, std::string docIdentidad) {
    // Asocia a la variable de instancia pPropietario un nuevo pPropietario
    // Es memoria dinámica, en el destructor se debe liberar
    this->pPropietario = new Propietario(nombre, docIdentidad);
}

void Perro::setPropietario(Propietario *pPropietario) {
    this->pPropietario = pPropietario;
}
Propietario *Perro::getPropietario() {
    return this->pPropietario;
}

Veterinario *Perro::getPVeterinario(){
    return pVeterinario;
}

void Perro::setPVeterinario(Veterinario *pVeterinario) {
    Perro::pVeterinario = pVeterinario;
}

void Perro::agregarVeterinario(std::string name, int yearsOfExperience){
    this->pVeterinario = new Veterinario(name, yearsOfExperience);
}

int Perro::getEdad() {
    return edad;
}

void Perro::setEdad(int edad) {
    this->edad = edad;
}

std::string Perro::getRaza() {
    return raza;
}

void Perro::setRaza(std::string raza) {
    this->raza = raza;
}

std::string Perro::getTamanio() {
    return tamanio;
}

void Perro::setTamanio(std::string tamanio) {
    this->tamanio = tamanio;
}

std::string Perro::getNombre() {
    return nombre;
}

void Perro::setNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string Perro::getColor() {
    return color;
}

void Perro::setColor(std::string color) {
    this->color = color;
}

Perro::~Perro() {
    delete pPropietario;
}

Raza Perro::getPRaza() {
    return *pRaza;
}

void Perro::setPRaza(Raza *pRaza) {
    Perro::pRaza = pRaza;
}




