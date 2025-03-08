/*Se desea convertir las calificaciones alfabéticas A, B, C, D, E y F
 a calificaciones numéricas 9, 8, 7, 6, 5 y 4 respectivamente.
*/
#include<iostream>
using namespace std;

//jonathan aviles

int main(){
	string calificacion;
	cin>>calificacion;
	
	if(calificacion == "A" || "a"){
		cout<<9;
	}
	else{
		if(calificacion == "B" || "b"){
			cout<<8;
		}
		else{
			if(calificacion == "C" ||"c"){
				cout<<7;
			}
			else{
				if(calificacion == "D" || "d"){
					cout<<6;
				}
				else{
					if(calificacion == "E" || "e"){
						cout<<5;
					}
					else{
						if(calificacion == "F" || "f"){
							cout<<4;
						}
					}
				}
			}
		}
	}
	
	
	return 0;
}
