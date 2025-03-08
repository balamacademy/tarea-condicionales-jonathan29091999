#include<iostream>
using namespace std;

int main(){
	int edad;
	
	cout<<"Edad del cliente : ";
	cin>>edad;
	
	if(edad < 4){
		cout<<" ¡¡Gratis!! ";
	}
	else{
		if(edad <= 18){
			cout<<" Paga $5 ";
		}
		else{
			if(edad>18){
				cout<<" Paga $10 ";
			}
		}
	
	}
	

	
	
	
	return 0;
}
