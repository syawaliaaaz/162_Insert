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

void insertionsort() { //Procedure Insertionsort

	int temp; //Membuat variable data temporer atau penyimpanan sementara
	int i, j; //Membuat variable j sebgai penanda

	for (i = 1; i <= n - 1; i++) { //1.Looping dengan i dimulai dari 1 hingga n-1

		temp = arr[i];             //2.Simpan nilai arr[i] ke variable sementara temp

		j = i - 1;                 //3.Setting nilai j sama dengan i-1

		while (j >= 0 && arr[j] > temp) //4.Looping while dimana nilai j lebih besar sama dengan 0 dan
			                           //arr[1] lebih besar darpada temp
		{
			arr[j + 1] = arr[j];   //4a.Simpan arr[j] ke dalam variable arr[j+1]
			j--;                   //4b.Decrement nilai j by 1
		}

		arr[j + 1] = temp;         //5.Simpan nilai temp ke dalam arr[j+1]

		cout << "\nPass " << i << ": "; //Output ke layar
		for (int k = 0; k < n; k++) {   //Looping nilai k dimulai dari 0 hingga n-1
			cout << arr[k] << " ";      //Output ke layar

		}

	}

}

void display() { //Procedure Display
	cout << endl; //Output baris kosong
	cout << "\n===============================" << endl; //Output ke layar
	cout << "Element Array yang telah tersusun" << endl; //Output ke layar
	cout << "=================================" << endl; //Output ke layar

	for (int j = 0; j < n; j++) { //Looping dengan j dimulai dari 0 hingga n-1
		cout << arr[j] << endl;   //Output ke layar
	}
	cout << endl;                 //Output baris kosong

}




