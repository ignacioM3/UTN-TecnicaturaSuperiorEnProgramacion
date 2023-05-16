#include <iostream>
using namespace std;

//Para un meteorólogo poder registrar por hora temperatura y precipitacion(durante 7 dias)
//a)_Dia y hora con la menor temperatura
//b)_Menor temperatura, mostrar dia
//c)_El dia que mas llovio, sumatoria
int main (){
    int temperatura, lluvia,  minTemperatura = 999999,  minDia,  minHora;
    int maxTemp = 0,  MayorDia,  sumLluvia = 0,  mayorLluvia = 0,  mayorDiaLluvia = 0;

    //con este for recorremos los 7 dias
    for (int i = 1; i <= 7; i++){

        //con el segundo for recorremos las 24 horas
        for(int j = 1; j <= 24; j++){
            //mostramos de manera opcional el dia y hora que estamos iterando
            cout << "Dia " << i << " Hora: " << j << endl ;

            cout << "Ingrese la temperatura: " << endl;
            cin >> temperatura;
            cout << "Ingrese la lluvia: " << endl;
            cin >> lluvia;

            //punto a)_
            if(minTemperatura > temperatura){
                minTemperatura = temperatura;
                //recordar que la variable i es de dia y la j la estamos usando en horas en los for
                minDia = i;
                minHora = j;
            }

            //punto b)_
            if(maxTemp < temperatura){
                maxTemp = temperatura;
                MayorDia = i;
            }
            //acumulador de lluvia por dia
            if(j = 1){
                sumLluvia = 0;
            }

            sumLluvia += lluvia;
        }

        //punto c)_
        if(mayorDiaLluvia < sumLluvia){
            mayorDiaLluvia = i;
            mayorLluvia = sumLluvia;
        }
        
    }

    
    cout << "La menor temperatura fue de: " << minTemperatura << " fue el dia: " << minDia << " hora: " << minHora;
    cout << "El dia con la mayor temperatura fue el: " << MayorDia << endl;
    cout << "El dia que mas llovio fue el: " << mayorDiaLluvia << endl;

    system("pause");
    return 0;
}