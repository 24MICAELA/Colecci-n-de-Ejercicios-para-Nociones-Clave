#include <iostream>
#include "persona/Persona.h"
#include "estudiante/Estudiante.h"
#include "nuevo/Nuevo.h"

#define PI 3.14159

#define AREA_CIRCULO(r) (PI * (r) * (r))

int g = 20;

int suma(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Hola Mundo" << std::endl;

    imprimirMensaje();

    double radio = 5.0;
    std::cout << "El area de un circulo con radio " << radio << " es: "
              << AREA_CIRCULO(radio) << std::endl;

    Persona persona;
    persona.setNombre("Juan");
    persona.setEdad(30);
    persona.setGenero("Masculino");

    std::cout << "Nombre: " << persona.getNombre() << std::endl;
    std::cout << "Edad: " << persona.getEdad() << std::endl;
    std::cout << "Genero: " << persona.getGenero() << std::endl;

    Estudiante estudiante;
    estudiante.setNombre("Ana");
    estudiante.setEdad(20);
    estudiante.setGenero("Femenino");
    estudiante.setGrado("Universitario");

    estudiante.mostrarDetalles();

    return 0;
}