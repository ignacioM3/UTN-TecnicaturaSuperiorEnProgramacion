#include <iostream>
using namespace std;

int main()
{
    int M, num3 = 0;
    cout << "Ingrese un valor para sacar los primeros multiplos de 3 que no sean de 5: " << endl;
    cin >> M;
    for (int i = 1; i <= M; i++){
        if(i % 3 == 0 && i % 5 != 0){
            cout << "resultado: " << num3 << endl;
        }
    }

    system("pause");
    return 0;
}