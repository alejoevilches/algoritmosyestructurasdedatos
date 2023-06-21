
/*Un programa que solicite el ingreso de un número entero comprendido entre 0 y 100
(incluidos ellos) - si está fuera de ese rango, deberá solicitar el reingreso hasta ser
correcto. E indique como salida si el número ingresado es par o impar.*/

#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Ingresa un numero: ";
    cin >> num;
    while (num < 0 || num > 100){ 
        cout << "El numero es invalido. Ingresalo nuevamente: ";
        cin >> num;
    }
    if (num % 2 == 0){
        cout << "El numero es par";
    } else {
        cout << "El numero es impar";
    }
}
