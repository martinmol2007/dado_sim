#include "../include/dado.hh"

using namespace std;


void sacar_dado(ostream& out, const Matriz& m, int n) {
    out << "Ha salido un " << n << "!" << endl;
    for(int i = 0; i < m.size(); i++) {
        for(int j = 0; j < m[0].size(); j++) {
            out << m[i][j];
        }
        out << endl;
    }
    out << endl;
    
    return;
}

void selecionar_dado(int n, ostream& historial, DadoInfo& d) {
    if(n == 1) {
        d.veces_1 += 1;
        sacar_dado(historial, CARA_1, n);
    }
    else if(n == 2) {
        d.veces_2 += 1;
        sacar_dado(historial, CARA_2, n);
    }
    else if(n == 3) {
        d.veces_3 += 1;
        sacar_dado(historial, CARA_3, n);
    }
    else if(n == 4) {
        d.veces_4 += 1;
        sacar_dado(historial, CARA_4, n);
    }
    else if(n == 5) {
        d.veces_5 += 1;
        sacar_dado(historial, CARA_5, n);
    }   
    else if(n == 6) {
        d.veces_6 += 1;
        sacar_dado(historial, CARA_6, n);
    }
    else {
        cerr << "Error, numero de cara invalida" << endl;
        exit(1);
    }
}

void sacar_estadistica(ostream& estadistica, DadoInfo& d) {
    // Calcular porcentajes

    // Debug
    estadistica << d.veces_1 << endl;
    estadistica << d.veces_2 << endl;
    estadistica << d.veces_3 << endl;
    estadistica << d.veces_4 << endl;
    estadistica << d.veces_5 << endl;
    estadistica << d.veces_5 << endl;

    d.porcentaje_1 = (d.veces_1 * 100.0) / d.total;
    d.porcentaje_2 = (d.veces_2 * 100.0) / d.total;
    d.porcentaje_3 = (d.veces_3 * 100.0) / d.total;
    d.porcentaje_4 = (d.veces_4 * 100.0) / d.total;
    d.porcentaje_5 = (d.veces_5 * 100.0) / d.total;
    d.porcentaje_6 = (d.veces_6 * 100.0) / d.total;

    

    estadistica << "Estadistia de las tiradas: " << endl;
    /*
    for(int i = 0; i < v.size(); i++) {
        estadistica << "Cara " << i+1 << " " << endl;
        int cien = 100;
        int num  = v[i];

        while(num != 0) {
            estadistica << "|";
            num--;
            cien--;
        }

        while(cien != 0) {
            estadistica << ".";
            cien--;
        }

        estadistica << endl;
    }
    */
}