#include<iostream>
using namespace std;
int main(){
    int n, numMenor;
    cout << "Ingresa un numero";
    cin >> numMenor;
    for (int i=0; i<9; i++){
        cout << "Ingresa un numero";
        cin >> n;
        if (n<numMenor){
            numMenor=n;
        }
    }
    cout << "El numero mas alto ingresado es " << numMenor;
}