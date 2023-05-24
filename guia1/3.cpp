#include<iostream>
using namespace std;
int main(){
    float n, n1, promedio;
    cout << "Ingresá el primer numero";
    cin >> n;
    while (n<0 || n>10){
        cout << "Ingresaste un numero invalido. Intenta nuevamente";
        cin >> n;
    }
    cout << "Ingresa el segundo numero";
    cin >> n1;
    while (n1<0 || n1>10){
        cout << "Ingresaste un numero invalido. Intenta nuevamente";
        cin >> n1;
    }
    promedio = (n+n1)/2;
    cout << "El promedio de ambos numeros es" << promedio;
};