//
// FUNCIONES IMPLEMENTADAS POR LOZADA HÉCTOR
//
int HE_Suma()
{
	int he_ax, he_bx, he_cx;
	cout<<"\n\tSUMA DE 2 NÚMEROS"<<endl;
	cout<<"Ingrese el primer número a sumar: "; cin>>he_ax;
	cout<<"Ingrese el segundo número a sumar: "; cin>>he_bx;
	he_cx = he_ax+he_bx;
	cout<<"\n\tResultado"<<endl;
	cout<<"El resultado de la suma entre "<<he_ax<<" + "<<he_bx<<" es igual a: "<<he_cx<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: suma de 2 numeros"<<endl;
	cout<<"//==> Archivo : suma.cpp"<<endl;
	cout<<"//==>Autor: Héctor Escobar"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int HE_CuentaMoneda()
{
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

int HE_PuntoVenta()
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

int HE_Edad()
{
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

int HE_Compara()
{
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

int HE_Menu()
{
	int opp, flag;
	do
	{
		system("cls");
		menu:
		cout<<"\n\t\t\t----------FUNDAMENTOS DE PROGRAMACI?N-----------"<<endl;
		cout<<"\t\t\t------PROGRAMA REALIZADO POR LOZADA HECTOR------"<<endl;
		cout<<"\t\t\t----------------MENÚ DE OPCIONES----------------"<<endl;
		cout<<"\t\t\t------------------------------------------------"<<endl;
		cout<<"1. SUMA DE 2 NÚMEROS"<<endl;
		cout<<"2. CONTADOR DE MONEDAS"<<endl;
		cout<<"3. CALCULADORA DE EDAD"<<endl;
		cout<<"4. COMPARACIÓN DE 2 NÚMEROS"<<endl;
		cout<<"5. CONTROL DE VENTAS"<<endl;
		cout<<"0. REGRESAR AL MENÚ PRINCIPAL"<<endl;
		cout<<"INGRESE UNA OPCIÓN: "; cin>>opp;
		switch(opp)
		{
			case 1:
				system("cls");
				HE_Suma();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 2:
				system("cls");
				HE_CuentaMoneda();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 3:
				system("cls");
				HE_Edad();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 4:
				system("cls");
				HE_Compara();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 5:
				system("cls");
				HE_PuntoVenta();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			if(opp!=0 && opp>0)
			{
				cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
			}		  
			if(opp==0)
			{
				cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

			}
				flag=cin.ignore().get();
				cout<<flag<<endl;
				
		}
	}
	while(opp != 0);
	cout<<"CREATED BY LOZADA";
	return(0);
}
