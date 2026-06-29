#include <iostream>

// Para el número aleatorio
#include <random>

// Para medir el tiempo
#include <chrono>
#include <ctime>   

// Borrar archivos
#include <filesystem>

// Mis archivos headers
#include "include/dado.hh"
#include "include/menu.hh"

using namespace std;


int main() {
    // Parámetros iniciales
    long long tiradas, cont = 0;
    bool rapido;
    
    // Muestra el menú inicial
    menu_inicial(tiradas, rapido);

    // Inicializar a 0 todos los parametros
    DadoInfo DadoInfo = {0, 0, 0, 0, 0, 0, 0};

    // Asigna en el primer momento todas las tiradas que se van a realizar
    DadoInfo.total = tiradas;

    // Tiempo (en segundos) desde 1970 (para los archivos)
    time_t time_epoch = time(nullptr);

    // Inicio del programa (para medir el tiempo)
    auto time_inicio = chrono::high_resolution_clock::now();

    // Crea un archivo llamado "historial.txt" en la carpeta out
    ofstream historial("out/historial_" + to_string(time_epoch) + ".txt");

    // Crea un archivo llamado "estadistica.txt" en la carpeta out
    ofstream estadistica("out/estadistica_" + to_string(time_epoch) + ".txt");

    // Consigue un número aleatorio
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, 6);

    while(cont != tiradas) {
        // Generar un número aleatorio entre 1 y 6 (las caras del dado)
        int numAleatorio =  distrib(gen); 

        // Selecciona el dado que ha salido y escríbelo en el archivo "historial"
        selecionar_dado(numAleatorio, historial, DadoInfo, rapido);

        cont++;
    }
    
    // Final del programa (para medir el tiempo)
    auto time_final = chrono::high_resolution_clock::now();

    // Calcula la duración del programa
    auto duracion = chrono::duration_cast<chrono::milliseconds>(time_final - time_inicio).count();

    // Sacar estadísticas
    sacar_estadistica(estadistica, DadoInfo);
    estadistica << "Tiempo total de la simulacion: " << duracion << " ms" << endl;

    return 0;
}