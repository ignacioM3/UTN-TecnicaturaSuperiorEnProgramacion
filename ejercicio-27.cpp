#include <iostream>
using namespace std;


int main (){
    int kEquipos, puntaje = 0;
    char resultado;
    cout << "ingrese la cantidad de equipos del torneo: " ;
    cin >> kEquipos;
    //primer for recorre los k equipos
    for (int i = 1; i <= kEquipos; i++){
        //segundo for recorremos los partidos jugado de cada equipo
        for (int j = 1; j < kEquipos; j++){
            cout << "Resultado del equipo " << i << " en el partido nro: " << j << endl;
            cout << "P (Perdido), E (Empatado) G (Ganado): " ;
            cin >> resultado;
            switch (resultado){
            case 'P':
                break;
            case 'E':
                puntaje = puntaje + 1;
                break;
            case 'G':
                puntaje = puntaje + 3;
            default:
                break;
            }
        }
        //una vez finalizado todos los resultado de cada equipo imprimimos
        cout << "El equipo " << i << " Obtuvo un total de " << puntaje << " Puntos totales" << endl;

    }

    system("puase");
    return 0;
    
}