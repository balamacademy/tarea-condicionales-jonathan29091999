/*Escriba un programa que pida el a�o actual y un a�o cualquiera y
 que escriba cu�ntos a�os han pasado desde ese a�o o cu�ntos a�os faltan para llegar a ese a�o.
*/
#include<iostream>
using namespace std;

//jonathan aviles

int main(){
	int anioActual = 0;
	int anioCualquiera = 0;
	
	
	cin>>anioActual;
	cin>>anioCualquiera;
	
	if(anioActual>anioCualquiera){
		int resta = anioActual - anioCualquiera;
	   	cout<<"Han pasado "<<resta <<" agnios";
    } 
    else{
		int resta = anioCualquiera - anioActual;
		
	 	cout<<"Faltan "<<resta <<" agnios";
	 }
	
	
	return 0;
}
