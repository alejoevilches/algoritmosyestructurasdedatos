/* Un programa que solicite el ingreso de diez números pares. En cada caso, si no
cumple con esa condición deberá solicitar el reingreso hasta ser correcto. Y muestre
como salida el mayor de ellos. */

#include<iostream>
using namespace std;
int main(){
    int num, numMayor;
    cout << "Ingresa un numero: ";
    cin >> num;
    while (num % 2 != 0){
        cout << "El numero es invalido. Ingresalo nuevamente: ";
        cin >> num;
    }
    numMayor=num;
    for (int i = 0; i < 9; i++)
    {
        cout << "Ingresa un numero: ";
        cin >> num;
        while (num % 2 != 0){
            cout << "El numero es invalido. Ingresalo nuevamente: ";
            cin >> num;
        }
        if (num > numMayor){
            numMayor=num;
        }
    }
    cout << "El numero mas alto ingresado es " << numMayor;
}