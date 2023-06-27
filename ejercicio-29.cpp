#include <iostream>
using namespace std;

int main()
{
    int num, miles, centenas, decenas, unidades;

    cout << "ingrese un numero del 1 al 3999: ";
    cin >> num;

    //Evitamos que el usuario ponga un valor invalido
    if(num < 1 && num > 3999){
        cout << "Valor invalido" << endl ;
        system("pause");
        return 0;

    }
    // obtener cada cifra del número
    miles = num / 1000;
    centenas = num / 100 % 10;
    decenas = num / 10 % 10;
    unidades = num % 10;

    // Imprimimos los miles
    for (int i = 1; i <= miles; i++){
        cout << "M";
    }

    //imprimimos centenas
    if(centenas == 9){
        cout << "CM";
    } // Logica para imprimir 500 en adelante
    if(centenas >= 5){
        cout << "D";
        for (int i = 5; i < centenas; i++){
            cout << "C";
        }
    }
    if(centenas == 4){
        cout <<"CD";
    }
    if(centenas < 4){
        for (int i = 1; i <= centenas; i++){
            cout << "C";
        }
        
    }
    
    //decenas
    if(decenas == 9){
        cout << "XC";
    }
    if(decenas >= 5){
        cout << "L";
        for ( int i = 5; i < decenas; i++){
            cout << "X";
        }
    }
    if(decenas == 4){
        cout << "LX";
    }

    if(decenas < 4){
        for (int i = 1; i <= decenas; i++){
           cout << "X";
        }

    //Unidades
    if(unidades == 9){
        cout << "IX";
    }
    if(unidades >= 5)
        cout << "V";
        for (int i = 5; i < unidades; i++){
            cout << "I";
        }   
    }
    if(unidades == 4){
        cout << "IV";
    }
    if(unidades < 4){
        for (int i = 1; i <= unidades; i++){
            cout << "I";
        }
        
    }

    //para espacio al final no tiene ningun tipo de uso ademas de mejorar visualmente el final del programa
    cout << endl;

    system("pause");
    return 0;
}