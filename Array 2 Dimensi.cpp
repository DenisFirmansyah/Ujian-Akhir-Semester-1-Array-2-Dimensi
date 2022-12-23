#include <iostream>
using namespace std;

void garis (){
	cout << "_________________________" << endl;
}

int main (){
	int baris, kolom, i, j;
	int a[20][20];
	
	cout << "Masukkan Jumlah Baris: ";
	cin >> baris;
	cout << "Masukkan Jumlah Kolom: ";
	cin >> kolom;
	garis ();
	cout<<endl;
	
	for (i = 1; i <= baris; i++){
		for (j = 1; j <= kolom; j++){
			cout << "Masukkan Index baris ke [" << i << "], kolom ke [" << j << "]: ";
			cin >> a[i][j];
		}
	}
	garis();
	
	cout << endl << "Tampilan Data: " << endl << endl;
	for(i = 1; i <= baris; i++){
		for(j = 1; j <= kolom; j++){
			cout << " " << a[i][j];
		}
		cout << endl;
	}
	garis();
	
	cout << endl << "Tampilan Data Baris dan Kolom Dibalik: " << endl << endl;
	for(i = 1; i <= kolom; i++){
		for(j = 1; j <= baris; j++){
			cout << " " << a[j][i];
		}
		cout << endl;
	}
}
