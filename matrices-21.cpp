/* 
21.Ingresar las edades de los alumnos de un curso e informar cuántos alumnos tienen una edad
que supera la edad promedio. Se desconoce la cantidad de alumnos a procesar pero se sabe que
a lo sumo se inscriben 50 alumnos en un curso.
 */

#include <iostream>
using namespace std;

#define CANTALUMNOS 50

int main(){

    int cantCursos, edad, cantAlumnos = 0, promedioEdad, edadTotal, mayorPromedio;
    int matrizEdad[][CANTALUMNOS] = {0};
    cout << "Ingrese la cantidad de cursos a procesar: " << endl;
    cin >> cantCursos;
    matrizEdad[cantCursos - 1][CANTALUMNOS];

    for (int i = 0; i < cantCursos; i++){
        cout << "Curso " << i << endl; 
        cout << "Ingrese la edad del alumno(0 para ir al siguiente curso): " << endl;
        cin >> edad;
        matrizEdad[i][cantAlumnos] = edad;

        promedioEdad = 0;
        cantAlumnos = 0;
        edadTotal = 0;
        mayorPromedio = 0;

       while (edad != 0){
        cout << "Ingrese la edad del alumno(0 para ir al siguiente curso): " << endl;
        cin >> edad;
        matrizEdad[i][cantAlumnos] = edad;
        edadTotal += edad;
        cantAlumnos += +1;
       }
        promedioEdad = cantAlumnos / edadTotal;

        for (int j = 0; j < cantAlumnos; j++){
            if(matrizEdad[i][j] > promedioEdad){
                mayorPromedio += +1;
            }
        }

        cout << "La cantidad de personas que superan la edad promedio es de " << mayorPromedio << endl;
        
       
    }
    

    

    system("pause");
    return 0;
}