#include <iostream>
using namespace std;

int main()
{
    int num, total = 0;
    cout << "Ingrese un numero (negativo para finalizar)" << endl;
    cin >> num;
    while (num > 0)
    {
        cout << "Numero ingresado: " << num << endl;
        total += 1;
        cout << "Ingrese un numero (negativo para finalizar)" << endl;
        cin >> num;
    }
    cout << "El total de numeros ingresado fue de: " << total << endl;

    system("pause");
    return 0;
}