/*Se desea dise�ar un algoritmo que escriba los nombres de los d�as de la semana en 
funci�n del valor de una variable DIA introducida por teclado. 
Si introducimos otro n�mero nos da un error. NOTA: Los nombres de los d�as con mayuscula inicial y sin acentos.
*/

#include<iostream>
using namespace std;

//jonathan aviles

int main(){
	int dia;
	cin>>dia;
	
	
	switch(dia){
		case 1: cout<<"Lunes: ";
	    break;
		case 2: cout<<"Martes: ";
		break;
		case 3: cout<<"Miercoles: ";
		break;
		case 4: cout<<"Jueves: ";
		break;
		case 5: cout<<"Viernes: ";
		break;
		case 6: cout<<"Sabado: ";
		break;
		case 7: cout<<"Domingo: ";
		break;
		default: cout<<"ese dia de la semana existe";
	}
	
	return 0;
}
