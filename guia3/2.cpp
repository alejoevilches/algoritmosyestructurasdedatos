#include<iostream>
using namespace std;
int main(){
    int n, numMayor=0;
    for (int i=0; i<3; i++){
        cout << "Ingresa un numero";
        cin >> n;
        if (n>numMayor){
            numMayor=n;
        }
    }
    cout << "El numero mas alto ingresado es " << numMayor;
}