#include<bits/stdc++.h>
using namespace std;
int main(){
	int suma=0, n, pago, vuelto;
	string rpta;
	cout<<"Bienvenido a mi tienda."<<endl;
	cout<<"Me presento, Soy Franklin y hoy lo atendere."<<endl;
	do
	{
		cout<<"Ingresar el gasto :";
		cin>>n;
		cout<<"Desea escribir mas gastos(si/no)? :"<<endl;
		
		cout<<"rpta :";
		cin>>rpta;
		suma=suma+n;
	}
	while(rpta=="si");
	cout<<"La suma total es :"<<suma<<endl;
	cout<<"Con cuanto va a pagar :";
	cin>>pago;
	if( pago>=suma){
		vuelto=pago-suma;
		cout<<"Su vuelto es :"<<vuelto<<endl;
	} else{
		cout<<"El dinero que me dio es insuficiente.";
	}
	cout<<"Gracias por su compra."<<endl;
	cout<<"Tenga un buen dia."<<endl;
	return 0;
}
