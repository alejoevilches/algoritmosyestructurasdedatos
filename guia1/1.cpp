#include<iostream>
using namespace std;
int main(){
    int n,n1;
    float promedio;
    cout<<"Ingrese el prmier número: ";
    cin>>n;
    cout << "Ingrese el segundo numero: ";
    cin>>n1;
    promedio = (n+n1)/2.0;
    cout<<"El promedio de los dos numeros ingresados es " << promedio;
    return 0;
}