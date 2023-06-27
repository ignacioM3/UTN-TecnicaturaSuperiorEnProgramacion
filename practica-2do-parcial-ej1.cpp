#include <iostream>
using namespace std;

void distintos(int vecA[], int cantA, int vecB[], int cantB, int vecC[], int &cantC){

    //vecA = {0, 2, 4, 9} vecB = {1, 2, 3, 5 9} vecC= {0, 1, 3, 4, 5}
    int i = 0, j = 0;
    cantC = 0;
    while (i < cantA && j < cantB){
        if (vecA[i] == vecB[j]){
            i++;
            j++;
        }
        else{
            if (vecA[i] < vecB[j]){
                vecC[cantC] = vecA[i];
                i++;
            }
            else{
                vecC[cantC] = vecB[j];
                j++;
            }
            cantC++;
        }
    }

    while (i < cantA){
        vecC[cantC] = vecA[i];
        i++;
        cantC++;
    }

    while (j < cantB)
    {
        vecC[cantC] = vecB[j];
        j++;
        cantC++;
    }
    return;
}

void imprimir(int vec[], int cant)
{
    for (int i = 0; i < cant; i++)
    {
        cout << vec[i] << endl;
    }
    return;
}

int main()
{
    int vecA[] = {0, 2, 4, 9};
    int vecB[] = {1, 2, 3, 5, 9};
    int vecC[10];

    int cantC = 0;

    distintos(vecA, 4, vecB, 5, vecC, cantC);
    imprimir(vecC, cantC);
    
    system("pause");
    return 0;
}