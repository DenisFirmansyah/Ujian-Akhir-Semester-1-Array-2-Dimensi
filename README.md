# Ujian Akhir Semester 
<br>Mata Kuliah 	: Dasar Pemrograman
<br> Nama		: Denis Firmansyah
<br>NIM		:	1227050034
<br>Jurusan		:[Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi Umum
Pada kesempatan ini kita akan membahas salah satu source code yang umum diketahui banyak orang, yaitu membuat array 2 dimensi menggunakan bahasa C++.<br>
Tujuan utama dari bahasan ini adalah untuk merubah letak nilai yang tadinya dari baris menjadi kolom.</br>
Algoritma dari Source code ini yaitu : <br>
<ol>
<li>User menginputkan berapa banyak baris pada array.</li>
<li>User menginputkan berapa banyak kolom pada array.</li>
<li>User menginputkan satu persatu nilai array, dimulai dari baris dan kolom pertama [1]:[1].</li>
<li>Setelah semua terisi, nilai dalam array tersebut di tampilkan sesuai aturan matriks.</li>
<li>Kemudiam matriks yang sudah diperoleh akan ditampilkan juga nilai yang sudah dibalik, dari baris menjadi kolom dan sebaliknya.</li>
</ol>

## Source Code
  ```shell
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
			cout << "Masukkan Index baris ke " << i << " kolom ke " << j << ": ";
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
```

## Output
![Output Array 2 Dimensi](https://user-images.githubusercontent.com/121292416/209354735-dbef16c2-0f7d-4e2c-b6be-c05afcf96296.jpeg)

