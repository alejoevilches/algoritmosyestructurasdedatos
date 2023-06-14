#include<iostream>
#include<string>

using namespace std;
int main(){
   int numFactura;
   int totalEncuestas=0;
   int calificacion;
   int sumaCalificaciones=0;
   int contadorMin=0;
   int contadorMax=0;
   double promedioEncuestas=0.0;
   int maximaCalificacion=1;
   int minimaCalificacion=10;
   string comentario;

   cout << "Ingrese los ultimos 4 digitos de su factura: ";
   cin >> numFactura;
   while (numFactura!=0){
       totalEncuestas++;
       cout << "¿que puntuacion del 1 al 10 das a McBaires?: ";
       cin >> calificacion;
       while (calificacion<1 || calificacion>10){
           cout << "Ingrese una calificacion de 1 a 10: ";
           cin >> calificacion;
       }
       sumaCalificaciones+=calificacion;
       if (calificacion < minimaCalificacion){
           minimaCalificacion=calificacion;
           contadorMin=1;
       } else if (calificacion == minimaCalificacion){
           contadorMin++;
       }
       if (calificacion > maximaCalificacion){
           maximaCalificacion=calificacion;
           contadorMax=1;
       } else if (calificacion==maximaCalificacion){
           contadorMax++;
       }
       promedioEncuestas=sumaCalificaciones / totalEncuestas;
       cout << "¿Tienes alguna sugerencia?";
       cin.ignore();
       getline(cin, comentario);
       cout << "Muchas gracias por responder!" << "\n";
       cout << "Ingresa los ultimos 4 digitos de su factura: ";
       cin >> numFactura;
   }
        cout<< "Finalizando" << "\n";
		cout<<"Total de encuestas: "<<totalEncuestas<< "\n" ;	   
		cout<<"Promedio de las encuestas del dia fue: "<<promedioEncuestas<< "\n";    
	   cout << "La calificacion mas baja es: " << minimaCalificacion << " que se ingreso " << contadorMin << " veces." << "\n" ;
       cout << "La calificacion mas alta es: " << maximaCalificacion << " que se ingreso " << contadorMax << " veces." << "\n";
}