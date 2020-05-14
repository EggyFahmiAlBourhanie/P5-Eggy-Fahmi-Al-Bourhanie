#include <iostream>
using namespace std;

void kali(int *a,int *b)
{
	int hasil;
	hasil=*a**b;
	cout<<"Hasil perkalian = "<<hasil;
}
void bagi(int *d,int e)
{
	float hasil1;
	hasil1=*d/e;
	cout<<"Hasil  pembagian = "<<hasil1;
}
int main()
{
	int x,y;
	cout<<"Masukkan nilai x = ";cin>>x;
	cout<<"Masukkan nilai y = ";cin>>y;
	kali(&x,&y);cout<<endl;
	bagi(&x,y);
}
