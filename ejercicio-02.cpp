#include <iostream>
using namespace std;

int main () {
    int numeroA, numeroB;
    float resultado;
    char operacion;

    while(){
    cout << "Ingrese el nro A: " << endl;
    cin >> numeroA;
    cout << "Ingrese el nro B: " << endl;
    cin >> numeroB;
    cout << "Ingrese la operación (+ - * /): " << endl;
    cin >> operacion;

    switch (operacion){
    case '+':
        resultado = numeroA + numeroB;
        break;
    
     case '-':
        resultado = numeroA - numeroB;
        break;
    
     case '*':
        resultado = numeroA * numeroB;
        break;

     case '/':
        if(numeroB != 0){
            resultado = numeroA / numeroB;
        }
        break;
    }

    cout << numeroA << " " << operacion << " " << numeroB << " = " << resultado << endl;


    }

  
    system("pause");
    return 0;
}