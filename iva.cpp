/*Se trata de escribir el algoritmo que permita emitir la factura correspondiente a un
a compra de un artículo determinado, del que se adquiera una o varias unidades.
 El IVA a aplicar es del 15%
 y si el precio bruto (precio venta más IVA) es mayor de 1000, se debe realizar un descuento del 5%.
*/
#include<iostream>
using namespace std;

//jonathan aviles
int main(){
	int unidades, precio;
	
	float precioBruto;
	
	cin>>unidades;
	cin>>precio;
	
	
	//sacar precio de venta de cantidad de unidades por el precio de cada producto
	int precioVenta = unidades * precio;
	

	//sacar iva del precio de venta
	float iva = (precioVenta * 15 ) /100;
	
	
     //incrementar el iva al precio de venta 
	 precioBruto = precioVenta+iva;
	 
	 
	 
	if(precioBruto <1000){
		cout<<"Pagar "<<precioBruto;
	}
	else{
 	 	 if(precioBruto >1000){
		 	int descuento =  (precioBruto *5) /100;
		
	  	 descuento = precioBruto - descuento;
	    
	   	 cout<<" Pagar "<<descuento;
 	 	  } 
	}
	
	
	
	
	return 0;
}
