#include <iostream>
using namespace std;

#define MAX_COLS 25

/* 17. Ingresar dos valores, M (< 30) y N (< 25) y a continuación por filas todos los componentes de
una matriz MATRIZA de M filas y N columnas. Desarrollar un programa que:
a) Imprima la matriz MATRIZA por columnas.
b) Calcule e imprima el valor promedio de los componentes de la matriz.
c) Genere e imprima un vector VECSUMCOL donde cada componente sea la suma de la columna
homóloga.
d) Genere e imprima un vector VECMAXFIL donde cada componente sea el valor máximo de cada
fila. */

void leer(string mensaje, int &valor)
{
    cout << mensaje;
    cin >> valor;
    return;
}

void imprimir(int matriz[][25], int filas, int columnas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "Ingrese el nro [" << i << "] [" << j << "]:";
            cin >> matriz[i][j];
        }
        cout << endl;
    }
}

int main()
{
    int Mfil, NCol, maxNum = 0;
    // Toma de datos
    leer("Ingrese las Filas(Maximo 30): ", Mfil);
    leer("Ingrese las Columnas(Maximo 25): ", NCol);
    int matriz[Mfil][NCol];
    int VecSumCol[NCol], VecMaxFil[Mfil];

    for (int i = 0; i < Mfil; i++){
        for (int j = 0; j < NCol; j++){
            cout << "Ingrese el nro [" << i << "] [" << j << "]:";
            cin >> matriz[i][j];
        }
        cout << endl;
    }
    
    // Imprima la matriz MATRIZA por columnas
    for (int j = 0; j < NCol; j++){
        for (int i = 0; i < Mfil; i++){
            cout << " posicion [" << i << "] [" << j << "]: " << matriz[i][j];
        }
        cout << endl;
    }

    // Genere e imprima un vector VECSUMCOL donde cada componente sea la suma de la columna homóloga.
    for (int j = 0; j < NCol; j++){
        for (int i = 0; i < Mfil; i++){
            VecSumCol[j] += matriz[i][j];
        }
    }
    
    //d) Genere e imprima un vector VECMAXFIL donde cada componente sea el valor máximo de cada fila
    for (int i = 0; i < Mfil; i++){
        maxNum= 0;
        for (int j = 0; j < NCol; j++){
            if(maxNum < matriz[i][j]){
                VecMaxFil[i] = matriz[i][j];
            }
        }
    }

    system("pause");
    return 0;
}