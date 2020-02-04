#include <stdlib.h>
#include <time.h>
#include<iostream>
using namespace std;
 
int main()
{
	int n, x1 ,i=1, p0, p2, i0=1, i2=1;
	double p,s;
    cout<<"Cuantos numeros quiere ingresar? ";
    cin>>n;
    do
    {
    	i=i+1;
    	cout<<"Ingrese un numero: ";
    	cin>>x1;
    	s=s+x1;
	}while(i<=n);
	
	p=s/n;
	p0=p;
	p2=p;
	
	do
	{
		i0++;
		p0=p0-1;
		cout<<p0<<endl;
	}while(i0<=5);
	
	cout<<"Promedio: "<<p<<endl;
	
	do
	{
		i2++;
		p2=p2+1;
		cout<<p2<<endl;
	}while(i2<=5);
	
	return 0;
}
