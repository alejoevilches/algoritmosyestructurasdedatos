#include<iostream>
using namespace std;
int main(){
    float n1,n2, promedio;
    cout << "Ingresa un numero";
    cin >> n1;
    while (n1<0){
        cout << "Ingresaste un numero invalido. Ingresalo de nuevo";
        cin >> n1;
    }
    cout << "Ingresa otro numero";
    cin >> n2;
        while (n2<0){
        cout << "Ingresaste un numero invalido. Ingresalo de nuevo";
        cin >> n2;
    }
    promedio=(n1+n2)/2;
    cout << "El promedio de los numeros ingresados es " << promedio;
}