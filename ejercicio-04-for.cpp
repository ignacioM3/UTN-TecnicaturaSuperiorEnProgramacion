#include <iostream>
using namespace std;

int main (){
    float nota, suma, promedio;
    int cantNotas, cantNotasTotal;
    cantNotas = 0;
    suma= 0;

    cout << "Ingrese la cantidad de notas:" ;
    cin >> cantNotasTotal;
    for(int i = 0; i < cantNotasTotal; i++){
        cout << "Ingrese una nota (0 para terminar)" ;
        cin >> nota;
        suma = suma + nota;
    }

    if(cantNotasTotal > 0){
        promedio = suma / cantNotasTotal;
        cout << "El promedio es: " << promedio << endl; 
    }

    system("pause");
    return 0;
}