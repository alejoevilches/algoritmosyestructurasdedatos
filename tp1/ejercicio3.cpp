#include<iostream>
using namespace std;
int main(){
	
	int peso=1;
	int unidad=1; 
	int precioPeso=0; 
	float precioUnidad=0;
	float precioTotal=0; 
	int efectivo;
	float recaudacion=0;
	char seguir;
	bool deseaSeguir;
do{
	cout<<"Ingrese peso de helado en gramos:  "; 
	cin>>peso;
	cout<<"Ingrese unidades de helado:   ";
	cin>>unidad;

	while (peso==0&&unidad==0){
		cout << "La compra es invalida. Por favor, repetir de nuevo: " << "\n";
		cout<<"Ingrese peso de helado en gramos:  "; 
		cin>>peso;
		cout<<"Ingrese unidades de helado:   ";
		cin>>unidad;
	}
	
	precioUnidad= unidad*600;
	
	precioPeso= peso*1.5;

	precioTotal= precioUnidad+precioPeso;

	recaudacion+=precioTotal;
	cout<< peso << "Gramos de helado:  "<<precioPeso<<endl;
cout<< unidad << "Unidades de helado:  "<<precioUnidad<<endl;
	cout<<"Total a pagar:   "<<precioTotal<<endl;
	
	cout<<"Paga en efectivo:  ";
	cin>>efectivo;
	while (efectivo < precioTotal){
		cout << "El monto no alcanza para cubrir el total de la compra. Ingrese el monto nuevamente" << "\n";
		cin >> efectivo;
	}
	cout<<"Su vuelto es:   "<<efectivo-precioTotal<<endl;
do {
    cout << "¿Desea continuar? (s/n): ";
    cin >> seguir;
    if (seguir == 's' || seguir == 'S') {
        deseaSeguir = true;
    } else if (seguir == 'n' || seguir == 'N') {
        deseaSeguir = false;
    } else {
        cout << "Ingresaste un caracter inválido. Intenta nuevamente." << endl;
    }
} while (seguir != 's' && seguir != 'S' && seguir != 'n' && seguir != 'N');
}  while(deseaSeguir);
    cout<<"La recaudacion del dia de hoy es:  "<<recaudacion<<endl;
}