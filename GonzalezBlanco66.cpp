#include <iostream>
#include <math.h>

using namespace std;

int main(){
 int x1=0, ec;
 
 do
 {
 	x1=x1+2;
 	ec=((pow(x1,4))-(pow(x1,2)*8)+(7));
 	cout <<"Resultado para "<<x1<<" Es: "<<ec<< endl;
 }while(x1<40);
 
 return 0;
}
