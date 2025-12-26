/*
Ejercicio 1: Tu primer programa
🎯 Objetivo:
Imprimir un saludo personalizado en consola.

🧠 Preguntas:
¿Qué hace #include <iostream>?
¿Qué significa std::cout?
¿Por qué usamos return 0?
🔁 Variaciones:
Cambia el nombre por uno ingresado por el usuario.
Imprime tu edad y ciudad.
*/

#include <iostream>
#include <string>

int main() {
    std::string nombre, ciudad;
    int edad;

    std::cout << "Cual es tu nombre? ";
    std::cin >> nombre;

    std::cout << "Que edad tienes? ";
    std::cin >> edad;

    std::cout << "En que ciudad naciste? ";
    std::cin >> ciudad;

    std::cout << "Hola, " << nombre << ", tienes " << edad << " años y naciste en " << ciudad << std::endl;

    return 0;
}


/*
int main() {
    std::cout << "Hola, Hugo!" << std::endl;
    return 0;
}
*/