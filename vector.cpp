#include <iostream>
using namespace std;

void imprimir(int vec[], int cant){
    for (int i = 0; i < cant; i++){
        cout << "Posicion: " << i << " Valor: " << vec[i];
    }
}

void cargar(int vec[], int cant) {
    for(int i = 0; i < cant; i++) {
    cout << "Ingrese una edad";
    cin >> vec[i];
    }
}

int buscaMax( int vec[], int cant) {
    int max = vec[0];
    for(int i = 1; i < cant; i++) {
        if (vec[i] > max) {
        max = vec[i];
        }   
    }
    return max;
}


int buscaPosMax( int vec[], int cant) {
    int max = vec[0];
    int pos = 0;
    for(int i = 1; i < cant; i++) {
        if (vec[i] > max) {
            max = vec[i];
            pos = i;
        }
    }
    return pos;
}

float promedio(int vec[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += vec[i];
    }
    return (float) sum / n ;
}


int main(){


    
    system("pause");
    return 0;
}