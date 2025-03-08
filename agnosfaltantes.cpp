/*Escriba un programa que pida el año actual y un año cualquiera y
 que escriba cuántos años han pasado desde ese año o cuántos años faltan para llegar a ese año.
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
