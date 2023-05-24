#include<iostream>
using namespace std;
int main(){
    float n, parcial, promedio;
    parcial=0;
    for (int i=1; i<=50;i++){
        cout << "Ingresa el numero " << i << ":";
        cin >> n;
        while (n<0){
            cout << "Ingresaste un numero invalido. Intenta nuevamente";
            cin >> n;
        }
        parcial+=n;
    }
    promedio=parcial/50;
    cout << "El promedio de los numeros ingresados es " << promedio;
}