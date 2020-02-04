#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a,b,c;
	cout <<"Ingrese tres numeros "<<endl;
	cin >>a;
	cin >>b;
	cin >>c;
	
	if(c<b&&b<a) cout <<"El orden es el siguiente "<<endl<<a<<endl<<b<<endl<<c<<endl;
	else if(a<b&&b<c) cout <<"El orden es el siguiente "<<endl<<c<<endl<<b<<endl<<a<<endl;
	else if(a<b&&c<a) cout <<"El orden es el siguiente "<<endl<<b<<endl<<a<<endl<<c<<endl;
	else if(a<c&&c<b) cout <<"El orden es el siguiente "<<endl<<b<<endl<<c<<endl<<a<<endl;
	else if(b<c&&b<a&&a<c) cout <<"El orden es el siguiente "<<endl<<c<<endl<<a<<endl<<b<<endl;
	else cout <<"El orden es el siguiente "<<endl<<a<<endl<<c<<endl<<b<<endl;
}
