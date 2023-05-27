#include<iostream>
using namespace std;
int main(){
    int n, n1;
    bool ordenamiento=true;
    cout << "Ingresa un numero";
    cin >> n;
        for (int i = 1; i<10; i++){
            cout << "Ingresa otro numero";
            cin >> n1;
            if (n > n1){
                ordenamiento=false;
            }
        }
        if (ordenamiento){
            cout << "Los numeros ingresados estan ordenados entre si";
        } else {
            cout << "Los numeros no estan ordenados";
        }
    }
