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

void inline valorar_tiradas(std::string& linea) {
    if(linea.empty()) {
        std::cout << "Error, vacio" << std::endl;
        exit(1);
    }
    for(char caracter : linea) {
        if(caracter < '0' || caracter > '9') {
            std::cout << "Error, prueba de nuevo" << std::endl;
            exit(1);
        }
    }
}

void inline menu_inicial(long long& tiradas, bool& rapido) {
    std::cout << "///////////////////////////////////////////////////////////////////////////////////////////////" << std::endl;
    std::cout << "Bienvenido al simulador de tirada de dados!" << std::endl;
    std::cout << "A continuación, introduce el número de veces que quieres tirar un dado: ";
    std::string linea;
    std::cin >> linea;
    valorar_tiradas(linea);
    tiradas = stoi(linea);
    std::cout << "¿Versión rápida? Y/N: ";
    std:: string respuesta;
    std::cin  >> respuesta;
    valorar_respuesta(rapido,respuesta);
    std::cout << "El historial de tiradas se verá en out/historial.txt, y su estadística en out/estadistica.txt" << std::endl;
    std::cout << "///////////////////////////////////////////////////////////////////////////////////////////////" << std::endl;

    return;
}

#endif