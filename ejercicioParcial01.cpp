#include <iostream>
using namespace std;

//funcion para sacar la edad
int sacarEdad(int fecha){
    int fechaActual = 20230508, edadAAAAMMDD, edad;

    edadAAAAMMDD = fechaActual - fecha;
    edadAAAAMMDD / 10000;
    return edad;
}


int main(){
    
    //esta parte solo la usamos para probar la funcion no hace falta en el examen
    int fecha, edad;
    cout << "Ingrese una fecha(formato AAAAMMDD): " << endl;
    cin >> fecha;

    edad = sacarEdad(fecha);
    cout << "La edad es: " << edad << endl;

    system("pause");
    return 0;
}