//================================================


//==> Nombre del programa: calcula la edad
//==> Archivo : LozadaHector-edad.cpp
//==>Autor: Héctor Escobar
//==>Fecha de elaboración: 2022-01-10
//==>Fecha última actualización: 2022-05- 15


//=================================================
#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;
 
void calcularEdad( int he_anioAct , int he_mesAct, int he_fechAct, int he_anioNac, int he_mesNac, int he_fechNac);
 
int main ()
{
	setlocale(LC_ALL, "");
	int he_diaAct; 
	int he_mesAct; 
	int he_anoAct; 
	int he_diaNac; 
	int he_mesNac; 
	int he_anoNac;			
	int he_anoR, he_mesR, he_diaR;
		
	cout<<"\n\tEdad\n\n";
	cout << "Ingrese Año Actual: ";   cin >> he_anoAct;
	cout << "Ingrese Mes Actual: ";   cin >> he_mesAct;
	cout << "Ingrese Dia Actual: ";  cin >> he_diaAct;
	cout << "\nIngrese Año Nacimiento: ";  cin >> he_anoNac;
	cout << "Ingrese Mes de Nacimiento: ";  cin >> he_mesNac;
	cout << "Ingrese Dia de Nacimiento: ";  cin >> he_diaNac;			
	if (he_anoAct > he_anoNac)
	{
		if(he_mesAct > he_mesNac)	 
		{
			he_anoR=he_anoAct-he_anoNac;	
			he_mesR=he_mesAct-he_mesNac;					
		}
		else
		{
			he_anoR=he_anoAct-he_anoNac-1;	
			he_mesR=(he_mesAct+12)-he_mesNac;					
		}												
		if(he_diaAct > he_diaNac)
		{				
			he_diaR=he_diaAct-he_diaNac;
		}
		else
		{
			he_mesR=he_mesR-1;
			he_diaR=(he_diaAct+30)-he_diaNac;
		}	
		cout << "\nUd. tiene:\n";
		cout << " Edad: " <<he_anoR<< endl;
		cout << " Mes: " <<he_mesR << endl;
		cout << " Dia: " << he_diaR << endl;								
	}
	else
	{
		cout << "\n Calculo no es posible ";
	}
	return 0;
}
