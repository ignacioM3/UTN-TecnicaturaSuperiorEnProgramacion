#include <iostream>
using namespace std;

int componerFecha(int anio, int mes, int dia){
    int fecha = 0;
    // juntamos los datos en una sola linea
    fecha = anio * 10000;
    fecha = fecha + mes * 100;
    fecha = fecha + dia;

    return fecha;
}

bool esPrivamera1982(int anio){
    if (anio >= 19820923 && anio <= 19821222){
        return true;
    }else{
        return false;
    }
}


int main(){
    int dia = 1, mes, anio;
    char genero, generoMasViejo;
    int nacimientoOctubre = 0, antes9Julio = 0, mujeresPrimavera = 0, menorFecha = 99999999, fechaAAAAMMDD;

    cout << "Ingrese el dia de nacimiento(0 para terminar): " << endl;
    cin >> dia;
    while (dia != 0){
        // ingreso de datos
        cout << "Ingrese el mes de nacimiento: " << endl;
        cin >> mes;
        cout << "Ingrese el anio de nacimiento: " << endl;
        cin >> anio;
        cout << "Ingrese el genero(M o F): " << endl;
        cin >> genero;
        // usamos una funcion para poder componer en una sola linea la fecha
        fechaAAAAMMDD = componerFecha(anio, mes, dia);

        // Cuántos nacimientos hubo en el mes de octubre de todos los años.
        if (mes == 10){
            nacimientoOctubre++;
        }

        // Cuántos nacimientos hubo antes del 9 de julio de 1990.
        if (fechaAAAAMMDD < 19990709){
            antes9Julio++;
        }

        // Cuántos nacimientos de mujeres hubo en la primavera del 1982.
        if (esPrivamera1982(fechaAAAAMMDD) && genero == 'F'){
            mujeresPrimavera++;
        }

        // Sexo de la persona más vieja (solo existe una).
        if (fechaAAAAMMDD < menorFecha){
            menorFecha = fechaAAAAMMDD;
            generoMasViejo = genero;
        }
        cout << "Ingrese el dia de nacimiento(0 para terminar): " << endl;
        cin >> dia;
    }
    //imprimir los puntos pedidos: 
    cout << "Los nacimientos que hubo en el mes de octubre fueron: " << nacimientoOctubre << endl;
    cout << "Los nacimientos antes del 9 de julio de 1990 fueron: " << antes9Julio << endl;
    cout << "Los nacimientos de mujeres que hubo en la primavera de 1982 fueron: " << mujeresPrimavera << endl;
    cout << "El sexo de la persona mas vieja es: " << generoMasViejo << endl;
    
    system("pause");
    return 0;
}