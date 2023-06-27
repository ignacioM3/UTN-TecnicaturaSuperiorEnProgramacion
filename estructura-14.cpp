#include <iostream>
using namespace std;
#define MAX_ANIOS 10
#define CANT_DISCOS 1000
#define CANT_BANDAS 100

struct Venta {
    string idDisco;
    int cantVendida;
};

struct Banda {
    char id;
    string nombre;
    int ventas;
};

struct Disco {
    string id;
    string nombre;
    char idBanda;
    string nombreBanda;
};

int busqBinaria(string idDisco, Disco discos[], int cantDiscos) {
    return 0; // Deberia devolver la posicion donde el idDisco coincida
}

void ordenar(Banda bandas[], int cantBandas) {
    // Ordena por burbujeo mejorado por nombreBanda
    return;
}

void procesarVentas(Venta ventas[][MAX_ANIOS], int cantVentas, int cantAnios, Disco discos[], int cantDiscos, Banda bandas[]) {

    for (int i = 0; i < cantVentas; i++){
        for (int j = 0; j < cantAnios; j++){
            
            int posDisco = busqBinaria(ventas[i][j].idDisco, discos, cantDiscos);
            int idBanda = discos[posDisco].idBanda;
            bandas[idBanda].id = idBanda;
            bandas[idBanda].nombre = discos[posDisco].nombreBanda;
            bandas[idBanda].ventas += ventas[i][j].cantVendida;
        }
    }
    ordenar(bandas, CANT_BANDAS);
    return;
}

int main () {

    Venta ventas[100][10];

    Disco discos[1000];
    Banda bandas[100];

 
system("pause");
 return 0;
}