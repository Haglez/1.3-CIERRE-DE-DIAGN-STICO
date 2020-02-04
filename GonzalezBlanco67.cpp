#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int x1=0, x2=0, x3=0, r1=0;
	do
	{
	cout <<"Introdusca la primera parte de 3 digitos "<<endl;
	cin >>x1;
	cout <<"Introdusca la segunda parte de 2 digitos "<<endl;
	cin >>x2;
	cout <<"Introdusca la tercera parte de 4 digitos "<<endl;
	cin >>x3;
	cout <<"Su NIMSS es  "<<x1<<x2<<x3<<endl;
	cout <<"Desea ingresar otro?  "<<endl;
	cout <<"1) Si  "<<endl;
	cout <<"2) No  "<<endl;
	cin >>r1;
	}
	while(r1==1);
	return 0;
}
