#include <iostream>
using namespace std;


//INT64_MAX

int main()
{
    int num, sublotes, cantNum = 0, totalSublotes = 0, min = 0;
    float promedio = 0;
    //ingreso de datos
    cout << "Ingrese un numero(negativo para finalizar)(0 para dividir en sublote) " << endl;
    cin >> num;

    //en el primer while confirmamos que no sea negativo, si es negativo finalizamos el programa
    while (num > 0){

        min = num;
        promedio = 0;
        sublotes = 0;
        cantNum = 0;

        //en el segundo while lo usamos para separar en sublotes, si es 0 finaliza este sublote
        while (num != 0){
            sublotes = sublotes + num;
            cantNum++;

            if(min > num){
                min = num;
            }

            cout << "Ingrese un numero(negativo para finalizar)(0 para dividir en sublote) " << endl;
            cin >> num;

        }
        //informacion de cada sublote
        totalSublotes++;
        promedio = (float) sublotes / (float) cantNum;
        cout << "El minimo del sublote es: " << min << endl;
        cout << "El promedio de valores del sublote es: " << promedio << endl;

        //nuevo sublote
        cout << "Ingrese un numero(negativo para finalizar)(0 para dividir en sublote) " << endl;
        cin >> num;
        
    }
    //fin del programa
    cout << "Total de sublotes procesados fueron de: " << totalSublotes << endl;


    system("pause");
    return 0;
}