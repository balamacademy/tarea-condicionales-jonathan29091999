/*Escribir un programa que lea un año indicar si es bisiesto. Nota: un año es bisiesto
 si es un número divisible por 4, pero no si es divisible por 100, excepto que también sea divisible por 400.
*/

#include<iostream>
using namespace std;

//jonathan aviles

int main(){
	int anio;
	
	cin>>anio;
	
	
	if(anio%4 == 0){
		cout<<"Es bisiesto";
		
	}
	else{
		if(anio%100 != 0){
			cout<<"No es bisiesto";
		}
		
	}
	
	
	return 0;
}
