//================================================


//==> Nombre del programa: Contador de moneda
//==> Archivo : LozadaHector-CuentaMoneda.cpp
//==>Autor: Héctor Escobar
//==>Fecha de elaboración: 2022-01-10
//==>Fecha última actualización: 2022-05- 15


//=================================================
#include<iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
		int he_n, he_c, he_c1, he_c2, he_cl, he_cz;
	float he_x, he_al, he_a, he_a1, he_a2, he_az;
	he_c = 0;
	he_c1 = 0;
	he_c2 = 0;
	he_a = 0;
	he_a1 = 0;
	he_a2 = 0;
	cout<<"\n\tCONTADOR DE MONEDAS\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";  cin>>he_n;
	do
	{
		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>he_x;
		he_c = he_c+1;
		he_a = he_a+he_x;
		if(he_x==0.25)
			{
				he_c1 = he_c1+1;
				he_a1 = he_x+he_a1;
			}
		else
			{
				he_c2 = he_c2+1;
				he_a2 = he_a2+he_x;
			}
	}
	while(he_c<he_n);
	cout<<"\n\tRESULTADOS\n\n"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<he_c<<endl;
	cout<<"Cantidad total de dinero contado: "<<he_a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<he_c2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<he_a2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<he_c1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<he_a1<<endl;					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Contador de monedas"<<endl;
	cout<<"//==> Archivo : cuentamoneda.cpp"<<endl;
	cout<<"//==>Autor: Héctor Escobar"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
