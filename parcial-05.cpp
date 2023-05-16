#include <iostream>
using namespace std;

// simulamos la funcion
int generaNumeroAleatorio(){
    // aca podemos poner cualquier numero
    return 10;
}

int main()
{
    int random, num, intentos = 3;

    cout << "Adivina el numero!!  Tienes " << intentos << " oportunidades: " << endl;
    cout << "ingrese el numero: " << endl;
    cin >> num;
    random = generaNumeroAleatorio();

    while (intentos > 0){
        
        if (num == random){
            cout << "Felicidades adivinaste el numero" << endl;
            // finalizamos el programa
            system("pause");
            return 0;
        }

        cout << "Numero equivocado" << endl;
        intentos = intentos - 1;

        if (intentos != 0){
            cout << "Adivina el numero!!  Tienes " << intentos << " oportunidades: " << endl;
            cout << "ingrese el numero: " << endl;
            cin >> num;
        }
    }

    cout << "Juego Finalizado. El numero era: " << random << endl;
    system("pause");
    return 0;
}