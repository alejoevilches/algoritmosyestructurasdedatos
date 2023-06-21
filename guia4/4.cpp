/* Un programa que solicite el ingreso de diez números enteros positivos, si no cumple
con esa condición deberá solicitar el reingreso hasta ser correcto. Y muestre como
salida el menor de ellos. */

#include<iostream>
using namespace std;
int main(){
    int num, numMenor;
    cout << "Ingresa un numero: ";
    cin >> num;
    while (num<0){
        cout << "El numero es invalido. Ingresalo nuevamente: ";
        cin >> num;
    }
    numMenor=num;
    for (int i = 0; i < 9; i++)
    {
        cout << "Ingresa un numero: ";
        cin >> num;
        while (num<0){
            cout << "El numero es invalido. Ingresalo nuevamente: ";
            cin >> num;
        }
        if (num<numMenor){
            numMenor=num;
        }
    }
    cout << "El numero mas bajo ingresado es " << numMenor;
}