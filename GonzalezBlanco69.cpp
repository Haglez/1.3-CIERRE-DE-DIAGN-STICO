#include <iostream>
using namespace std;
int main()
{
   int n,i;
   long double factorial;
   cout << "Introduce un Dia: ";
   cin >> n;
   factorial=1;
   for(i=1;i<=n;i++)
   {
   	factorial = factorial + i;
   	cout<<"Dia "<<i<<" Recibio "<<factorial<<endl;
   }
   cout << endl << "Factorial de " << n << " -> " << factorial << endl;
   system("pause");
}
