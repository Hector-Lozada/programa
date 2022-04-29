#include<iostream>
using namespace std;
int main()
{
	float x, c, a, n, vb, viva, vdes, vfi, vft;
	c = 0;
	a = 0;
	cout<<"\n\tPunto de Venta\n\n"<<endl;
	cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> n;
	
	do
	{
		cout<<"Ingrese el valor del producto " <<c+1 <<": " ;   cin>> x;
		c = c+1;
		a = a+x;
	}
	while(c<n);
	vb = a;
	viva = vb*0.12;
	vdes = vb*0.10;
	vfi = vb+viva;
	vft = vfi-vdes;
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Valor con iva es: "<<vfi<<endl;
	cout<<"Valor final es: "<<vft;
	return 0;
}
