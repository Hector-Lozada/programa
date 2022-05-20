//================================================


//==> Nombre del programa: Punto de Venta
//==> Archivo : LozadaHector-puntodeventa.cpp
//==>Autor: Héctor Escobar
//==>Fecha de elaboración: 2022-01-10
//==>Fecha última actualización: 2022-05- 15


//=================================================
#include<iostream>
using namespace std;
int main()
{
	float he_xx, he_cc, he_at, he_nn, he_vb, he_viva, he_vdes, he_vfi, he_vft;
	he_cc = 0;
	he_at = 0;
	cout<<"\n\tPunto de Venta\n\n"<<endl;
	cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> he_nn;			
	do
	{
		cout<<"Ingrese el valor del producto " <<he_cc+1 <<": " ;   cin>> he_xx;
		he_cc = he_cc+1;
		he_at = he_at+he_xx;
	}
	while(he_cc<he_nn);			
	he_vb = he_at;
	he_viva = he_vb*0.12;
	he_vdes = he_vb*0.10;
	he_vfi = he_vb+he_viva;
	he_vft = he_vfi-he_vdes;
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Valor con iva es: "<<he_vfi<<endl;
	cout<<"Valor final es: "<<he_vft<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Control de ventas"<<endl;
	cout<<"//==> Archivo : puntodeventa.cpp"<<endl;
	cout<<"//==>Autor: Héctor Escobar"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
