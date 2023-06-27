#include <iostream>
using namespace std;

#define MAX_COLS 50 


void leer(string mensaje, int &valor){
    cout << mensaje;
    cin >> valor;
    return;
}
int factorial(int num){
    int resultado = 1;
    for (int i = 1; i <= num; i++){
        resultado = resultado * i;
    }
    return resultado;
}


int main(){
    int cantNros;
    leer("Ingrese la cantidad de elementos: ", cantNros);

    int vec[cantNros] = {0};
   

    for(int i = 0; i < cantNros; i++){
        cout << "Ingrese un nro: ";
        cin >> vec[i];
    }
    int fact[cantNros] = {0};
    
    for (int i = 0; i < cantNros; i++){
         fact[i] =  factorial(vec[i]);
    }

    for (int i = 0; i < cantNros; i++){
        cout << vec[i] << "! = " << fact[i] << endl;
    }

    system("pause");
    return 0;
    
}

