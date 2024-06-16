#include<bits/stdc++.h>
using namespace std;
int main(){
	int suma=0, n; 
	string rpta;
	cout<<"Bienvenido."<<endl;
	
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
	cout<<"Tenga un buen dia.";
	return 0;
}
