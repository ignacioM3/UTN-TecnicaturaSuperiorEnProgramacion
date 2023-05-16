#include <iostream>
using namespace std;

int maximoComunDivisor(int nroA, int nroB){
    int resto = 0;

    resto = nroA % nroB;
    // 1 =  //10    3

    while (resto != 0){
       nroA = nroB;
       // 3
       nroB = resto;
       // 1 
       resto = nroA % nroB;
       
    }
    
    return nroB;
}


int main(){
    int valorA, valorB, mcd = 0;
    cout << "Ingrese el nro A:" << endl;
    cin >> valorA;
    cout << "Ingrese el nro B:" << endl;
    cin >> valorB;

    mcd = maximoComunDivisor(valorA, valorB);
    cout << "El MCD es : " << mcd << endl;

    system("pause");
    return 0;
}