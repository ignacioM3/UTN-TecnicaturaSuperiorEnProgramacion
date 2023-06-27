#include <iostream>
using namespace std;

int main()
{
    int tipo, clausurar = 0;
    string motivo;
    float valor, valorL = 0, valorG = 0, valorM = 0;
    char gravedad;

    for (int i = 0; i < 4; i++)
    {
        cout << "Ingrese el tipo de infraccion (1, 2, 3, 4): " << endl;
        cin >> tipo;

        cout << "Ingrese el motivo de la infraccion:" << endl;
        cin >> motivo;

        cout << "Ingrese el valor de la infraccion:" << endl;
        cin >> valor;

        cout << "Ingrese la gravedad (L, M, G):" << endl;
        cin >> gravedad;

        switch (gravedad){ 
        case 'L':
            valorL += valor;
            break;

        case 'M':
            valorM += valor;
            break;
        case 'G':
            valorG += valor;
            break;
        }

        if ((tipo == 3 || tipo == 4) && gravedad == 'G'){
            clausurar++;
        }
    }

    cout << "El valor de la infraccion L:" << valorL << endl;
    cout << "El valor de la infraccion M:" << valorM << endl;
    cout << "El valor de la infraccion G:" << valorG << endl;

    if (clausurar > 3){
        cout << "Clausarar fabrica" << endl;
    }

    system("pause");
    return 0;
}