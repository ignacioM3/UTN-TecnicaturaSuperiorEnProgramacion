#include <iostream>
using namespace std;

int main()
{
    int nroFactura, fecha, montoFacturado, mayorMonto = 0, menorMonto, contador = 0;
    int nroFacturaMenor, diaMayorMonto, facturacionTotal=0, promedio;

    cout << "Ingrese numero de factura(numero negativo para finalizar): " << endl;
    cin >> nroFactura;
    while (nroFactura >= 1)
    {
        cout << "Ingrese la fecha(AAAAMMDD): " << endl;
        cin >> fecha;
        cout << "Monto total facturado: " << endl;
        cin >> montoFacturado;
        //ToDo: El día en que ocurrió la factura de mayor monto.
        //Comparamos si el monto facturado es mayor que el mayorMonto guardado. Guardamos la fecha
        if (montoFacturado > mayorMonto)
        {
            mayorMonto = montoFacturado;
            diaMayorMonto = fecha;
        }

        //ToDo: El número de factura de menor monto.
        if (montoFacturado < menorMonto || contador == 0){
            //contador == 0 funciona en la primer vuelta, sirve para poder tener el menor valor en la primer vuelta
            menorMonto = montoFacturado;
            nroFacturaMenor = nroFactura;
        }
        //El contador nos sirve para poder sacar el promedio mas adelante

        contador++;
        facturacionTotal += montoFacturado;
        cout << "Ingrese numero de factura(numero negativo para finalizar): " << endl;
        cin >> nroFactura;
    }
    //ToDo: El promedio de facturación del mes.
    promedio = facturacionTotal / contador;

    cout << "El dia que ocurrio la facturacion de mayor monto fue: " << diaMayorMonto << endl;
    cout << "El nro de factura de menor monto es: " << nroFacturaMenor << endl;
    cout << "El promedio de facturacion del mes fue de: " << promedio << endl;
    
    system("pause");
    return 0;
}