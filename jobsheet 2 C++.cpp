#include<iostream>
using namespace std;
main(){
	int a=1, b=2, c=3, *pa=&a, *pb=&b, *pc=&c;
	
	cout << "Nilai alamat variabel a= "<<a<<endl;
	cout << "Nilai alamat variabel b= "<<b<<endl;
	cout << "Nilai alamat variabel c= "<<c<<endl;
	cout << "Nilai alamat pointer pa= "<<*pa<<endl;
	cout << "Nilai alamat pointer pb= "<<*pb<<endl;
	cout << "Nilai alamat pointer pc= "<<*pc<<endl;
	
	cout << "\nalamat variabel a= "<<&a<<endl;
	cout << "alamat variabel b= "<<&b<<endl;
	cout << "alamat variabel c= "<<&c<<endl;
	cout << "alamat pointer pa= "<<pa<<endl;
	cout << "alamat pointer pb= "<<pb<<endl;
	cout << "alamat pointer pc= "<<pc<<endl;
	
	
}
