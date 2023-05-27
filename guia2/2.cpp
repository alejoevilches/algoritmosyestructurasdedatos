#include<iostream>
using namespace std;
int main(){
    bool deseaContinuar=true;
    string decision;
    int contador=0, n, parcial=0;
    float promedio;
    while (deseaContinuar){
        cout << "Ingresa un numero";    
        cin >> n;
        parcial+=n;
        contador++;
        cout << "¿Desea ingresar otro numero? Ingrese S para ingresar otro y N para finalizar";
        cin >> decision;
        while (decision!="S" && decision!="N"){
            cout << "Ingresaste una opcion erronea. Intentalo nuevamente";
            cin >> decision;
        }
        if(decision=="N"){
            promedio=parcial/contador;
            cout << "El promedio de los numeros ingresados es: " << promedio;
            deseaContinuar=false;
        }
    }
    return 0;
}