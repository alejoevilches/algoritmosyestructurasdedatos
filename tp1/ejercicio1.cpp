#include<iostream>
using namespace std;
int main(){
    int cantidadMascaras=0;
    int total=0;
    cout << "Ingresa la cantidad de mascaras: ";
    cin >> cantidadMascaras;
    if (cantidadMascaras >= 100){
        total=cantidadMascaras*500;
    } else {
        total=cantidadMascaras*700;
    }
    cout << "Pago en efectivo: $" << total-(total/10) << "\n";
    cout << "Pago en 3 cuotas de: $" << total/3 << "\n";
    cout << "Pago en 6 cuotas de: $" << (total+(total*25/100))/6 << "\n";
    cout << "Pago en 12 cuotas de: $" << (total+(total*50/100))/12 << "\n";

    return 0;
}