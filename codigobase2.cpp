/*
🧪 Ejercicio 2: Entrada de datos
🎯 Objetivo:
Leer nombre y edad desde teclado.

🧠 Preguntas:
¿Qué diferencia hay entre std::cin y std::cout?
¿Qué pasa si escribes un nombre con espacios?
🔁 Variaciones:
Usa getline(std::cin, nombre); para leer nombres completos.
Agrega una condición: si edad ≥ 18, imprime “Mayor de edad”.

#include <iostream>
#include <string>

int main() {
    std::string nombre;
    int edad;

    std::cout << "¿Cuál es tu nombre? ";
    std::cin >> nombre;

    std::cout << "¿Qué edad tienes? ";
    std::cin >> edad;

    std::cout << "Hola " << nombre << ", tienes " << edad << " años." << std::endl;

    return 0;
}
*/

#include <iostream>
#include <string>

int main() {
    std::string nombre, textoEdad;
    int edad;

    std::cout << "¿Cuál es tu nombre? ";
    getline(std::cin, nombre);

    std::cout << "¿Qué edad tienes? ";
    std::cin >> edad;

    if ( edad >= 18){
        textoEdad = "mayor de edad";
    } else {
        textoEdad = "menor de edad";
    }

    std::cout << "Hola " << nombre << ", eres " << textoEdad << "." << std::endl;

    return 0;
}
