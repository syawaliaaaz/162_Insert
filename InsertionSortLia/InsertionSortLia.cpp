#include <iostream>
using namespace std;

int arr[20]; //Membuat Array dengan panjang data 20
int n;       //Membuat variabel inputan n
   
void input() { //Procedure Input
	while (true)
	{
		cout << "Masukkan Jumlah Data Pada Array : "; //Membuat Inputan Jumlah element Array
		cin >> n;                                     //Memanggil variable inputan n

		if (n <= 20) {                                //Membuat kondisi n tidak lebih dari 20
			break;

		}
		else
		{
			cout << "\n Array yang anda masukkan maksimal 20 Elemen. \n"; //Menampilkan Pesan Jika data lebih dari 20
		}
	}
	cout << endl;                           //Membuat jarak per baris program
	cout << "====================" << endl; //Membuat tampilan susunan data element array
	cout << "Masukkan Element Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++)                //Menggunakan perulangan for untuk menyimpan data pada array
	{
		cout << "Data Ke-" << (i + 1) << ": "; //Memasukkan atau menginputkan nilai data n
		cin >> arr[i];                         //Menyimpan nilai data n kedalam array arr
	}
}


