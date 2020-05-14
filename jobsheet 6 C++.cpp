#include <iostream>

using namespace std;

int develop_data(){   
	cout<<"Eggy fahmi al bourhanie\n"; // Fungsi Data Praktikan
	cout<<"F1B019045\n";
	cout<<"KELOMPOK 9\n";
	cout<<"===============================================\n";
	cout<<"     Menampilkan Array 2x2 Dengan Pointer\n";
	cout<<"===============================================\n\n";
}

int main(){
	
	develop_data();
	
	int i, j, x = 2, y = 2, matriks[50][50];
	int *xp, *yp;
	
	xp = &x;
	yp = &y;
	
 	cout << "Jumlah baris : "<<*xp<<endl;
    cout << "Jumlah kolom : "<<*yp<<endl;
    cout << "Masukkan elemen matriks\n";
    
  for (i = 0; i < *xp; i++){
    for (j = 0; j < *yp; j++){
      cin  >> matriks[i][j];
    }
  }
  for (i = 0; i < *xp; i++){
    for (j = 0; j < *yp; j++){
      cout << matriks[i][j] <<"\t";
    }
    cout << endl;
  }

	
}
