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

// Luego definimos el procedimiento pedido, especificando los parámetros que debemos recibir :

void procesarPrestamos(Prestamo prestamos[], int cantPrestamos, Estacion estaciones[], int cantEstaciones, Usuario usuarios[], int cantUsuarios)
{
    int i = 0;
    int dni;
    int totalExceso = 0;
    int posUsuario = 0;

    // Para calcular las estaciones que tienen mas retiros que devoluciones uso un vector del mismo
    // tamanio que las estaciones y sumo cuando retira y resto cuando devuelve
    int retiros[cantEstaciones] = {0}; // Declaro e inicializo con 0 el vector

    // Recorro los prestamos
    while (i < cantPrestamos){
        // Hacemos corte de control por dni acumulando el tiempo excedido si lo hubiera
        dni = prestamos[i].dni;
        totalExceso = 0;
        while (i < cantPrestamos && prestamos[i].dni == dni){
            // Punto b- Actualizo el estado de las estaciones afectadas por el prestamo
            // la posicion en el vector de estaciones se calucla usando id - 1 por PUP
            int posEstacionRetiro = prestamos[i].idRetiro - 1;
            estaciones[posEstacionRetiro].disponibles--;

            int posEstacionDevolucion = prestamos[i].idDevolucion - 1;
            estaciones[posEstacionDevolucion].disponibles++;

            // Acumulo el exceso en caso que corresponda para el dni actual para el punto c-
            if (prestamos[i].tiempo > 60)
            {
                totalExceso = totalExceso + (prestamos[i].tiempo - 60);
            }

            // Modifico el vector auxiliar de retiros para el punto d-
            retiros[posEstacionRetiro]++;
            retiros[posEstacionDevolucion]--;
        }

        // Cuando sale del while interno quiere decir que termino de procesar un dni,
        // imprimo si corresponde
        if (totalExceso > 0)
        {
            posUsuario = buscarUsuarioPorDNI(usuarios, cantUsuarios, dni);
            cout << dni << "    " << usuarios[posUsuario].apellido << ", " << usuarios[posUsuario].nombre << "    " << totalExceso << endl;
        }
    }

    // Luego de haber procesado todos los prestamos recorro el vector auxiliar de retiros
    // imprimiendo los datos de aquellos que tengan valor positivo, es deicir han tenido
    // mas retiro que devoluciones
    cout << "Estaciones con mas retiros que devoluciones en el dia:" << endl;
    cout << "ID"
         << "    "
         << "NOMBRE" << endl;
    for (int j = 0; j < cantEstaciones; j++)
    {
        if (retiros[j] > 0)
        {
            cout << estaciones[j].id << "    " << estaciones[j].nombre << endl;
        }
    }
}

// Función para busqueda binaria por dni de Usuarios :

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