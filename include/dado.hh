#ifndef DADOS_HH
#define DADOS_HH

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

/**
 * @brief Informacion para la tirada de dados
 * 
 */
struct DadoInfo {
    long long veces_1, porcentaje_1;
    long long veces_2, porcentaje_2;
    long long veces_3, porcentaje_3;
    long long veces_4, porcentaje_4;
    long long veces_5, porcentaje_5;
    long long veces_6, porcentaje_6;
    long long total;
};

/**
 * @brief typedef para definir una Matriz (vector de vectores)
 * 
 */
typedef std::vector<std::vector<std::string>> Matriz;


/**
 * @brief Cara numero 1
 * 
 */
const Matriz CARA_1 = {
    {" ", " ", " "},
    {" ", "*", " "},
    {" ", " ", " "}
};


/**
 * @brief Cara numero 2
 * 
 */
const Matriz CARA_2 = {
    {"*", " ", " "},
    {" ", " ", " "},
    {" ", " ", "*"}
};


/**
 * @brief Cara numero  3
 * 
 */
const Matriz CARA_3 = {
    {"*", " ", " "},
    {" ", "*", " "},
    {" ", " ", "*"}
};


/**
 * @brief Cara numero 4
 * 
 */
const Matriz CARA_4 = {
    {"*", " ", "*"},
    {" ", " ", " "},
    {"*", " ", "*"}
};


/**
 * @brief Cara numero 5
 * 
 */
const Matriz CARA_5 = {
    {"*", " ", "*"},
    {" ", "*", " "},
    {"*", " ", "*"}
};


/**
 * @brief Cara numero 6
 * 
 */
const Matriz CARA_6 = {
    {"*", " ", "*"},
    {"*", " ", "*"},
    {"*", " ", "*"}
};


/**
 * @brief Sacar el dado por el canal out
 * 
 * @param out Canal de salida
 * @param m Matriz con la cara del dado selecionado
 * @param n Numero de la cara del dado
 */
void sacar_dado(std::ofstream& out, const Matriz& m, int n);


/**
 * @brief Seleciona un dado y augmenta sus estadisticas
 * 
 * @param n Numero de la cara del dado que ha salido
 * @param historial Canal de salida para guardar el historial
 * @param d Info de las tiradas
 */
void selecionar_dado(int n, std::ofstream& historial, DadoInfo& d);

#endif