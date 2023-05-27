#include<iostream>
using namespace std;
int main(){
    int n, numMenor;
    cout << "Ingrese un numero";
    cin >> numMenor;
    for (int i=0; i<2; i++){
        cout << "Ingresa un numero";
        cin >> n;
        if (n<numMenor){
            numMenor=n;
        }
    }
    cout << "El numero mas bajo ingresado es " << numMenor;
}