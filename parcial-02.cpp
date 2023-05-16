#include <iostream>
using namespace std;

int main(){
    //Dados N números naturales de 3 dígitos ingresados, informar cuántos eran capicúa. 
    int num, C, U;

    cout << "Ingrese un numero de 3 digitos (Numero Natural) para saber si es capicua: " << endl;
    cin >> num;

    C = num / 100;
    U = num % 10;
    if(C == U){
        cout << "El num: " << num << " es capicua" << endl;
    }else{
        cout << "No es capicua" << endl;
    }

    system("pause");
    return 0;
}