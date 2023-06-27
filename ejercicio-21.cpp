//MI-21: Dados N valores informar el mayor, el menor y en qué posición del conjunto fueron ingresados.

#include <iostream>
using namespace std;


int main(){
    int valorMayor, valorMenor = 0, posicionMenor = 0, posicionMayor, ciclos = 1, n;

    cout << "Ingrese una serie de numeros, para informar Mayor, menor y la posicion(0 para finalizar): ";
    cin >> n;

    //evitar en el primer ingreso errores
    if(n == 0){
        system("puase");
        return 0;
    }
    
    valorMayor = n;
    valorMenor = n;
    posicionMayor = ciclos;
    posicionMenor = ciclos;
    //Evitamos asi numeros negativos y 0
    while (n != 0){
        //verificamos el mayor
        if(n > valorMayor){
            valorMayor = n;
            posicionMayor = ciclos;
        }
        if(n < valorMenor){
            valorMenor = n;
            posicionMenor = ciclos;
        }
        ciclos++;
        cout << "ingrese un nuevo numero(0 para finalizar): ";
        cin >> n;
    }

    cout << "El numero mayor es: " << valorMayor << " y su posicion es " << posicionMayor << endl;
    cout << "El numero menor es: " << valorMenor << " y su posicion es " << posicionMenor << endl;
    
    system("pause");
    return 0;
}
