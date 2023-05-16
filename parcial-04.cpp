#include <iostream>
using namespace std;


int mayorDireccion(int adelante, int atras, int izquierda, int derecha){
    if(adelante > atras && adelante > izquierda && adelante > derecha){
        cout << "La mayor direccion recorida fue hacia ADELANTE" << endl;
    }
    if(atras > adelante && atras > izquierda &&  atras > derecha){
        cout << "La mayor direccion recorida fue hacia ATRAS" << endl;
    }
    if(izquierda > adelante && izquierda > atras && izquierda > derecha){
         cout << "La mayor direccion recorida fue hacia la IZQUIERDA" << endl;
    }else{
         cout << "La mayor direccion recorida fue hacia DERECHA" << endl;
    }
}

int main()
{
    char direccion;
    int metros, metrosTotal = 0, metrosAvanzados = 0, bateria = 1000, adelante = 0, atras = 0, izquierda = 0, derecha = 0;

    cout << "Ingrese la direccion del robot ('F' - Adelante, 'B' - Atrás, 'L' - Izquierda, 'R' - Derecha): " << endl;
    cin >> direccion;
    cout << "Ingrese la cantidad de metros a dar en esa direccion: " << endl;
    cin >> metros;

    while (direccion != 'E' && bateria > 0){

        if (metros % 2){
            // Si la cantidad de metros es un número par, la batería se descuenta en (cantidad de metros / 4) unidades
            bateria = bateria - (metros / 4);
        }
        else{
            // Si la cantidad de metros es un número impar, la batería se descuenta en (cantidad de metros / 3) unidades
            bateria = bateria - (metros / 3);
        }

        // La dirección en la que se recorrió el trayecto más largo.
        switch (direccion)
        {
        case 'F':
            adelante++;
            metrosAvanzados = metrosAvanzados + metros;
            break;
        case 'B':
            metrosAvanzados = metrosAvanzados - metros;
            atras++;
            break;
        case 'L':
            metrosAvanzados = metrosAvanzados - metros;
            izquierda++;
            break;
        case 'R':
            metrosAvanzados = metrosAvanzados + metros;
            derecha++;
            break;
        }

        // metro total recoridos
        metrosTotal += metros;


        cout << "Ingrese la direccion del robot ('F' - Adelante, 'B' - Atrás, 'L' - Izquierda, 'R' - Derecha, 'E' - Para finalizar): " << endl;
        cin >> direccion;
        cout << "Ingrese la cantidad de metros a dar en esa direccion: " << endl;
        cin >> metros;
    }

    cout << "Metros total recorridos: " << metrosTotal << endl;
    cout << "Metros total avanzados: " << metrosAvanzados << endl;
    mayorDireccion(adelante, atras, izquierda, derecha);

    system("pause");
    return 0;
}