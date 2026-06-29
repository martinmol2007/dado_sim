#include "include/dado.hh"

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

void selecionar_dado(int n, ofstream& historial, DadoInfo& d) {
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