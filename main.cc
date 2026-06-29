#include <iostream>

// Para el numero aleatorio
#include <cstdlib> 
#include <ctime>   

#include "include/dado.hh"


using namespace std;

int main() {
    // Inicializar la semilla (solo se debe llamar una vez al inicio)
    srand(time(NULL));

    // Crea un archivo llamado "historial.txt" en la carpeta out
    ofstream historial("out/historial.txt");

    // Crea un archivo llamado "estadistica.txt" en la carpeta out
    ofstream estadistica("out/estadistica.txt");

    size_t cont = 0;
    size_t tiradas;

    cout << "///////////////////////////////////////////////////////////////////////////////////////////////" << endl;
    cout << "Bienvenido al simulador de tirada de dados!" << endl;
    cout << "A continuacion, introduce el numero de veces que quieres tirar un dado: ";
    cin >> tiradas;
    cout << "El historial de tiradas se vera en out/historial.txt, y su estadistica en out/estadistica.txt" << endl;
    cout << "///////////////////////////////////////////////////////////////////////////////////////////////" << endl;

    DadoInfo DadoInfo;
    
    while(cont != tiradas) {
        // Generar un número aleatorio entre 1 y 6 (las caras del dado)
        int numAleatorio = 1 + rand() % 6;    

        


        cont++;
    }
    

    

    

    return 0;
}