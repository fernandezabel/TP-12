#include<iostream>
#include<string>
using namespace std;
	
int main()
{
	float s,a,r;
	string nombre;
	
	cout<<"Ingrese el nombre"<<endl;
	getline(cin,nombre);
	cout<<"Ingrese su sueldo"<<endl;
	cin>>s;
	cout<<"Ingrese anio ingreso"<<endl;
	cin>>a;
	
	if(a<=15)
	{
		r=s*(0.2);
	} 
	if(a>=16)
	{
		r=s*(0.8);
	}
	
	
	cout<<"El sueldo real de "<<nombre<<" es de "<<r<<endl;
	
	return 0;
}