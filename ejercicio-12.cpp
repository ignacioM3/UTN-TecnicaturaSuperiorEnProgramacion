#include <iostream>
using namespace std;

int main(){

    int sumatoria = 0; 

    for(int i = 1; i <= 100; i++){
        cout << i << endl;
        sumatoria += i;
    }
    cout << "La sumatoria total es: " << sumatoria << endl;

    system("pause");
    return 0;
}