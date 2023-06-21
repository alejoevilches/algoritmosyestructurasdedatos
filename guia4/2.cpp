/* Un programa que solicite el ingreso de diez números enteros comprendidos entre 0
y 100 (incluidos ellos). En cada caso, si está fuera de ese rango deberá solicitar el
reingreso hasta ser correcto. Y valide que los números ingresados sean todos pares,
mostrando los mensajes: “Son todos pares” o “No son todos pares”, según
corresponda. */

#include<iostream>
using namespace std;
int num;
bool esImpar; 
int main(){
    for (int i = 0; i < 10; i++)
    {
        int num;
        cout << "Ingresa un numero: ";
        cin >> num;
        while (num < 0 || num > 100){ 
        cout << "El numero es invalido. Ingresalo nuevamente: ";
        cin >> num;
        }
        if (num % 2 != 0){
            esImpar=true;
        }
    }
    if (esImpar){
        cout << "Los numeros no son pares. ";
    } else {
        cout << "Los numeros son pares. ";
    }
}