#include <iostream>
using namespace std;
int main()
{
	int a = 80 , b = 75, c = 60, d = 50 , e = 30 , *n1, *n2, *n3, *n4, *n5;
	n1 = &a;
	n2 = &b;
	n3 = &c;
	n4 = &d;
	n5 = &e; 
	cout<<"nilai  \n";
if(n2<=n1)
cout<<"Jika 75-80 nilai anda A \n";
if(n3<=n2)
cout<<"Jika 60-74 nilai anda B\n";
if(n4<= n3)
cout<<"Jika 51-60 nilai anda C \n";
if(n5<=n4)
cout<<"Jika 30-50 nilai anda D \n";
if(0<=n5)
cout<<"Jika 0-29 nilai anda E\n";

}
