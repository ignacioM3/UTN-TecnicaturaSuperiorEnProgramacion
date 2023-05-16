#include <iostream>
using namespace std;

int main () {

    int numeroAle, numero;
    numeroAle = 123;

    for (int i = 0; i < 3; i++){
        
        cout << "Ingrese un Numero del 0 al 200" << endl;
        cin >> numero;
        if (numero < numeroAle){
            cout << "El numero es menor" << endl;
        }
        if (numero > numeroAle){
            cout << "El numero es mayor" << endl;
        }
        if (numero = numeroAle){
            cout << "Felicitaciones Has acertado el numero" << endl;
            cout << "Juego Finalizado" << endl;
            i = 4;
        }
        


    }
 system("pause");
 return 0;
}