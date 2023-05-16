#include <iostream>
using namespace std;

void descomponerHora(int horaHHMMSS, int &hora, int &minutos, int &segundos){
    hora = horaHHMMSS / 10000;
    minutos = (horaHHMMSS % 10000) / 100;
    segundos = horaHHMMSS % 100;
    return;
}

void calcularHora(int &hora, int tiempo){
    int horaInicial, minutoInicial, segundoInicial;
    int horaTiempo, minutoTiempo, segundoTiempo;
    descomponerHora(hora, horaInicial, minutoInicial, segundoInicial);
    descomponerHora(tiempo, horaTiempo, minutoTiempo, segundoTiempo);

    segundoInicial += segundoTiempo;
    if (segundoInicial >= 60)
    {

        minutoTiempo = minutoTiempo + (segundoInicial / 60);
        segundoInicial = segundoInicial % 60;
    }
    minutoInicial += minutoTiempo;
    if (minutoInicial >= 60)
    {

        horaTiempo = horaTiempo + (minutoInicial / 60);
        minutoInicial = minutoInicial % 60;
    }
    horaInicial += horaTiempo;
    if(horaInicial >= 24){
        
        horaInicial = horaInicial % 24;
       
    }
    hora = horaInicial * 10000 + minutoInicial * 100 + segundoInicial;

    return;
}



int main()
{   
    int hora = 195510;
    int tiempo;
    cout << "Ingrese una hora en formato HHMMSS: ";
    cin >> tiempo;
    calcularHora(hora, tiempo);

    cout << "la sumatoria total es de: " << hora << endl;

    system("pause");
    return 0;
}


