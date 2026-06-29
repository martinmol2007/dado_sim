#include "include/dado.hh"

using namespace std;


void sacar_dado(ostream& out, const Matriz& m) {
    for(int i = 0; i < m.size(); i++) {
        for(int j = 0; j < m[0].size(); j++) {
            out << m[i][j];
        }
        out << endl;
    }

    return;
}

void selecionar_dado(int n, ofstream& historial) {
    if(n == 1) {
        sacar_dado(historial, CARA_1);
    }
    else if(n == 2) {
        sacar_dado(historial, CARA_2);
    }
    else if(n == 3) {
        sacar_dado(historial, CARA_3);
    }
    else if(n == 4) {
        sacar_dado(historial, CARA_4);
    }
    else if(n == 5) {
        sacar_dado(historial, CARA_5);
    }   
    else if(n == 6) {
        sacar_dado(historial, CARA_6);
    }
    else {
        cerr << "Error, numero de cara invalida" << endl;
        exit(1);
    }
}