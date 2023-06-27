#include <iostream>
using namespace std;
#define CANT_DIAS 31

struct Empleado {
    int legajo;
    bool presentismo[31];
};

void imprimirMatriz(bool presentismo[][CANT_DIAS], int cantLegajos, int cantDias) {

}

int main () {
int N;
Empleado empleados[N];
int ausentismoXDia[31] = {0};

for (int i = 0; i < N; i++){
    cin >> empleados[i].legajo;
    for (int j = 0; j < 31; j++){
        cin >> empleados[i].presentismo[j];
    }
}

int legajos[N];
bool presentismoMat[N][CANT_DIAS];

imprimirMatriz(presentismoMat, N, CANT_DIAS);

int maxAusentes = -1;
int diaMaxAusentes = 0;
for (int j = 0; j < 31; j++)
{
    int ausentes = 0;
    for (int i = 0; i < N; i++)
    {
        if(presentismoMat[i][j] == 0) {
            ausentes++;
        }
    }
    if(ausentes > maxAusentes) {
        maxAusentes = ausentes;
        diaMaxAusentes = j;
    }
}


system("pause");
 return 0;
}