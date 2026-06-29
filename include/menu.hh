#ifndef MENU_HH
#define MENU_HH

#include <iostream>
#include <string>

void inline valorar_respuesta(bool& b, const std::string& s) {
    if(s == "Y") {
        b = true;
    }
    else if(s == "N") {
        b = false;
    } 
    else {
        std::cout << "Respuesta incorrecta, prueba de nuevo" << std::endl;
        exit(1);
    }
}

void inline menu_inicial(long long& tiradas, bool& rapido) {
    std::cout << "///////////////////////////////////////////////////////////////////////////////////////////////" << std::endl;
    std::cout << "Bienvenido al simulador de tirada de dados!" << std::endl;
    std::cout << "A continuacion, introduce el numero de veces que quieres tirar un dado: ";
    std::cin >> tiradas;
    std::cout << "Version rapida? Y/N: ";
    std:: string respuesta;
    std::cin  >> respuesta;
    valorar_respuesta(rapido,respuesta);
    std::cout << "El historial de tiradas se vera en out/historial.txt, y su estadistica en out/estadistica.txt" << std::endl;
    std::cout << "///////////////////////////////////////////////////////////////////////////////////////////////" << std::endl;

    return;
}

#endif