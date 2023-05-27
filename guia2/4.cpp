#include<iostream>
using namespace std;
int main(){
    int n, numeroPar=1;
    cout << "Ingresá un número";
    cin >> n;
    while (n<0){
        cout << "Ingresaste un numero invalido. Intenta nuevamente";
        cin >> n;
    }
    for (int i=0;i<n;i++){
        cout << numeroPar << "\n";
        numeroPar+=2;
    }
    return 0;
}