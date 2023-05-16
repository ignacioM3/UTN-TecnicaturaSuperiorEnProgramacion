#include <iostream>
using namespace std;

int main()
{
    int numM, numN, suma;
    suma = 0;

    cout << "ingrese el primer numero" << endl ;
    cin >> numM;

    cout << "ingrese el segundo numero" << endl;
    cin >> numN;

    for (int i = 0; i < numN; i++){
        suma += numM;
    }

    cout << "El producto de los dos numeros es: " << suma << endl;

    system("pause");
    return 0;
}
