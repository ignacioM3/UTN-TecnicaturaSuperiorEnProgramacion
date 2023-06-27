#include <iostream>
using namespace std;

struct Estacion
{
    int id;
    string nombre;
    int max;
    int disponibles;
};

struct Usuario
{
    int dni;
    string nombre;
    string apellido;
};

struct Prestamo
{
    int dni;
    int idRetiro;
    int idDevolucion;
    int tiempo;
};

void procesarPrestamos(Prestamo prestamos[], int cantPrestamos, Estacion estaciones[], int cantEstaciones, Usuario usuarios[], int cantUsuarios)
{
    int i = 0;
    int retiros[cantEstaciones] = {0};
    int devoluciones[cantEstaciones] = {0};
    while (i < cantPrestamos) {
        int dni = prestamos[i].dni;
        int exceso = 0;
        while(i < cantPrestamos && dni == prestamos[i].dni) {
            // Actualizo estado de las estaciones de retiro y devolucion
            estaciones[prestamos[i].idRetiro - 1].disponibles--;
            estaciones[prestamos[i].idDevolucion - 1].disponibles++;

            if (prestamos[i].tiempo > 60)
            {
                exceso += (prestamos[i].tiempo - 60);
            }

            retiros[prestamos[i].idRetiro - 1]++;
            devoluciones[prestamos[i].idDevolucion - 1]++;
        }

        if(exceso > 0) {
            int posUsuario = buscarUsuarioPorDNI(usuarios, cantUsuarios, dni);
            cout << dni << usuarios[posUsuario].apellido << usuarios[posUsuario].nombre << endl;
        }
        
        i++;
    }

    for (int i = 0; i < cantEstaciones; i++)
    {
        if(retiros[i] > devoluciones[i]) {
            cout << estaciones[i].id << estaciones[i].nombre << endl;
        }
    }
    

}

/**
 * Función para busqueda binaria por dni de Usuarios
 * */
int buscarUsuarioPorDNI(Usuario usuarios[], int cant, int dni)
{
    int inicio = 0;
    int fin = cant - 1;

    while (inicio <= fin)
    {
        int medio = inicio + (fin - inicio) / 2;
        if (usuarios[medio].dni == dni)
            return medio;
        if (usuarios[medio].dni < dni)
            inicio = medio + 1;
        else
            fin = medio - 1;
    }

    return -1;
}