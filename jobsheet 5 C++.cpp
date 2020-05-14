#include <iostream> 
using namespace std;

int main(void){ 
 char*bio = "Nama \t\t: Eggy fahmi al bourhanie\n\nTgl lahir \t: Taliwang, 01 Agustus 2000\n\nalamat \t\t: Karang Dima, Sumbawa Besar\n\nuniversitas \t: universitas mataram\n\n";
 char **point, ***pointpoin;
 point = &bio;
 pointpoin = &point;
 cout<<**pointpoin;
 return 0;
}
