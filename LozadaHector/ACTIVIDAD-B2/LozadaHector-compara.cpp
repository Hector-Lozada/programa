#include <iostream>
using namespace std;
int main()
{
	int a, b ;
	cout<<"\n\tCompara\n\n";
	cout<<"Ingrese el primer numero a comparar: ";  cin>> a;  
	cout<<"Ingrese el segundo numero a comparar: ";  cin>> b;
	if (a==b)
		cout<<"Son iguales"<<endl;
	else
		if (a>b)
			cout<<a<<" es mayor"<<endl;
		else
			cout<<b<<" es mayor"<<endl;
	
	return 0;
}
