#include <iostream>
using namespace std;

int main () {
    int numeroA, numeroB, suma, resta, producto;
    float division;
    cout << "Ingrese el nro A: " << endl;
    cin >> numeroA;

    suma = numeroA + numeroB;
	resta = numeroA - numeroB;
	producto =numeroA * numeroB;

    if(numeroB != 0){
        division = numeroA / numeroB;
        cout << "División: " << division << endl;
    }

    cout << "Suma: " << suma <<"Resta: " << resta << "Producto: " << producto << endl;

    system("pause");
    return 0;
}