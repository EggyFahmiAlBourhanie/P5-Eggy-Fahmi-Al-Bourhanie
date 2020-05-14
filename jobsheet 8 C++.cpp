#include <iostream>

using namespace std;
int main()
{
int tgl_lahir[] = { 1,8,2000};
int *ptgl;
ptgl = tgl_lahir; /* ptgl berisi alamat array */
cout<<"Diakses dengan pointer\n";
cout<<"Tanggal = "<< *ptgl<<"\n";
cout<<"Bulan = "<< *(ptgl + 1) <<"\n";
cout<<"Tahun = "<<*(ptgl + 2) <<"\n";
cout<<"\nDiakses dengan array biasa\n";
cout<<"Tanggal = "<< tgl_lahir[0] <<"\n";
cout<<"Bulan = "<< tgl_lahir[1] <<"\n";
cout<<"Tahun = "<< tgl_lahir[2] <<"\n";

}
