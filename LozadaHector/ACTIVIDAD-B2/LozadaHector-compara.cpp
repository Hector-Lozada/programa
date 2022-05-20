//================================================


//==> Nombre del programa: Comparacion de 2 números
//==> Archivo : LozadaHector-compara.cpp
//==>Autor: Luis Montezuma
//==>Fecha de elaboración: 2022-01-10
//==>Fecha última actualización: 2022-05- 15


//=================================================
#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int he_aa, he_bb ;
	cout<<"Ingrese el primer numero a comparar: ";  cin>> he_aa;  
	cout<<"Ingrese el segundo numero a comparar: ";  cin>> he_bb;
	if (he_aa==he_bb)
	{
		cout<<"Son iguales"<<endl;
	}
	else
	{
		if (he_aa>he_bb)
		{
		cout<<he_aa<<" es mayor"<<endl;
		}
		else
		{
		cout<<he_bb<<" es mayor"<<endl;
		}
	}					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Comparación"<<endl;
	cout<<"//==> Archivo : compara.cpp"<<endl;
	cout<<"//==>Autor: Héctor Escobar"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
