#include <iostream>
using namespace std;


int main (){
    int Q, P;
    cout << "Ingrese una fraccion en forma Q/P para sacar su mayor simplificacion: " << endl;
    cout << "Num Q: " << endl;
    cin >> Q;
    cout << "Num P: " << endl;
    cin >> P;


    for(int i = 2; i <= 9; i++){
        while(Q % i == 0 && P % i == 0){
            Q = Q / i;
            P = P / i;
        }
    }

    cout << "El Menor factor comun es: " << Q << "/" << P << endl;
    system("pause");
    return 0;

}