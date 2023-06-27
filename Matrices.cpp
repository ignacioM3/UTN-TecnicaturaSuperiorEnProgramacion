#include <iostream>
using namespace std;
#define MAX_FILAS 100
#define MAX_COLS 100

void cargarMatriz(int mat[][3], int filas) {
     for(int i = 0; i < filas; i++) {
          for(int j = 0; j < 3; j++) {
               cin >> mat[i][j];
          }
     }
}


void cargarMatrizDefine(int mat[MAX_FILAS][MAX_COLS], int filas, int cols) {
     for(int i = 0; i < filas; i++) {
          for(int j = 0; j < cols; j++) {
               cin >> mat[i][j];
          }
     }
}

void cargarAlumnos(int mat[][4], int cant) {
     for(int i = 0; i < cant; i++) {
          cout << "Ingrese el legajo del alumno";
          cin >> mat[i][0]; //En la primer columna de cada fila estará el legajo
          for(int j = 1; j < 4; j++) {
               cout << "Ingrese la nota " << j << ": ";
               cin >> mat[i][j];
          }
     }
}

void imprimirListado(int mat[][4], int cant) {
     int sum = 0;
     for(int i = 0; i < cant; i++) {
          cout << "Alumno: " << mat[i][0];
          sum = 0;
          for(int j = 1; j < 4; j++) {
               cout << " - Nota " << i << ": " << mat[i][j];
               sum += mat[i][j];
          }
          cout << " - Promedio: " << (float) sum / 3;
     }
}


int busquedaBinaria(int arr[], int n, int x) {
     // 1 2 3 4 5 6 7 8 9 10
     // Cuando arranco evalúo todo el vector de 0 a n - 1
     int inicio = 0;
     int fin = n -1; // 9
     while (fin >= inicio) {
          int mitad = inicio + (fin - inicio) / 2;
          // Si el elemento es el del medio, devolvemos la posicion
          if (arr[mitad] == x)
               return mitad ;
               // Si el elemento es menor entonces solo puede estar en la primer mitad
          if (arr[mitad] > x) {
               fin = mitad - 1; //Cambio el limite superior
          } else {
               inicio = mitad + 1; // Cambio el limite inferior
          }
     }
     // Si llegamos hasta aca es que el elemento no estaba
     return -1;
}

void insertionSort(int arr[], int n) {
     int i, key, j;
     for (i = 1; i < n; i++){
          key = arr[i];
          j = i - 1;
          /* Movemos los elementos de arr[0..i-1], que son
          mas grandes que key, a la posicion siguiente
          a su posicion actual */
          while (j >= 0 && arr[j] > key){
               arr[j + 1] = arr[j];
               j = j - 1;
          }
          arr[j + 1] = key;
     }
}


void burbujeo(int arr[], int n){
     int i, j, aux;
     for (i = 0; i < n-1; i++) {
     // Los ultimos i elementos ya estan ordenados
          for (j = 0; j < n-i-1; j++) {
               if (arr[j] > arr[j+1]) {
                    aux = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = aux;
               }
          }
     }
}


void burbuejoMejor(int arr[], int n){
     int i, j, aux;
     int i = 0;
     bool ordenado = false;
     while (i < n && !ordenado) {
          ordenado = true; // Arranco asumiendo que si esta ordenado
          // Los ultimos i elementos ya estan ordenados
          for (j = 0; j < n-i-1; j++) {
               if (arr[j] > arr[j+1]) {
                    aux = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = aux;
                    ordenado = false; // Cambio el flag si hice un swap
               }
          }
     i++;
     }
}

void apareo(int vecA[], int n, int vecB[], int m, int vecC[], int &k) {
     // Contadores para la posicion de los vectores A y B.
     int i = 0, j = 0;
     // Contador para posicionarse en el vector resultante.
     k = 0;
     // Mientras pueda comparar valores (al menos uno de los vectores tiene valor)
     while (i < n && j < m) {
          // Comparo los valores de los vectores
          if (vecA[i] < vecB[j]) {
               // Coloco el elemento de A porque es menor
               vecC[k] = vecA[i];
               // Me muevo en el vector A
               i++;
          } else {
               vecC[k] = vecB[j];
               j++;
          }
          // Incremento el contador de la posicion del vector resultante
          k++;
     }
     // Paso todos los elementos restantes de A
     while(i < n) {
          vecC[k] = vecA[i];
          i++;
          k++;
     }    
     // Paso todos los elementos restantes de B
     while(j < m) {
          vecC[k] = vecB[j];
          j++;
          k++;
     }
}



struct Alumno {
     int legajo;
     int nota1;
     int nota2;
};

void apareo(Alumno vecA[], int n, Alumno vecB[], int m, Alumno vecC[], int &k){
     // Contadores para la posicion de los vectores A y B.
     int i = 0, j = 0;
     // Contador para posicionarse en el vector resultante.
     k = 0;
     // Mientras pueda comparar valores (al menos uno de los vectores tiene valor)
     while (i < n && j < m) {
          // Comparo los valores de los vectores
          if (vecA[i].legajo < vecB[j].legajo) {
               // Coloco el elemento de A porque es menor
               vecC[k] = vecA[i];
               // Me muevo en el vector A
          i++;
          } else {
               vecC[k] = vecB[j];
               j++;
          }
     // Incremento el contador de la posicion del vector resultante
          k++;
     }
     // Paso todos los elementos restantes de A
     while(i < n) {
          vecC[k] = vecA[i];
          i++;
          k++;
     }
     // Paso todos los elementos restantes de B
     while(j < m) {
          vecC[k] = vecB[j];
          j++;
          k++;
     }
}


struct Presentismo {
     int legajo;
     int fecha;
     bool presente;
};
void listarPresentismo(Presentismo vec[], int n) {
     int i = 0;
     int ausentes = 0;
     int key;
     // Inicializamos contadores, acumuladores, etc. generales
     // El primer ciclo es el que recorre el lote completo
     while(i < n) {
          // Guardo el valor de la clave o agrupador
          key = vec[i].legajo;
          // Inicializo contadores, acumuladores, etc cada sublote
          ausentes = 0;
          // El segundo ciclo se mantiene por el sublote, mientras sea el mismo
          // legajo y aun no se haya acabado el vector
          while(i < n && key == vec[i].legajo) {
          // Cuento si es un registro de ausente
               if (!vec[i].presente) {
                    ausentes++;
               }
               i++; // Avanza a la siguiente posicion
          }
     // Mostramos resultados por cada sublote (legajo)
     cout << "Legajo: " << key << " faltas: " << ausentes << endl;
     }
     // Mostramos resultados generales
}

