#include<iostream>
using namespace std;
int main(){
    int n, numeroPar=0;
    cout << "Ingresá un número";
    cin >> n;
    while (n<0){
        cout << "Ingresaste un numero invalido. Intenta nuevamente";
        cin >> n;
    }
    for (int i=0;i<n;i++){
        numeroPar+=2;
        cout << numeroPar << "\n";
    }
    return 0;
}