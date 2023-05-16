#include <iostream>
using namespace std;

int main (){
    float nota, suma, promedio;
    int cantNotas;
    cantNotas = 0;
    suma= 0;

    cout << "Ingrese una nota (0 para terminar)" ;
    cin >> nota;
    while(nota > 0){
        suma = suma + nota;
        cantNotas++;

         cout << "Ingrese una nota (0 para terminar)" ;
         cin >> nota;
    }

    if(cantNotas > 0){
        promedio = suma / cantNotas;
        cout << "El promedio es: " << promedio << endl; 
    }

    system("pause");
    return 0;
}