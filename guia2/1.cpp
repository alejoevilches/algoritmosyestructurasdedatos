#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Ingresá un número";
    cin >> n;
    while (n<0){
        cout << "Ingresaste un numero incorrecto. Intenta nuevamente";
        cin >> n;
    }
    while (n>=1){
        cout << n << "\n";
        n--;
    }
    return 0;
}