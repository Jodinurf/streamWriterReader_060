#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string namaFile;

	cout << "Masukkan nama File : ";
	cin >> namaFile;

	// membuka file dalam mode menulis.
	ofstream outfile;
	// menunjuk ke sebuah nama file
	outfile.open(namaFile + ".txt", ios::out);
	
	cout << ">= Menulis file, \'q\' untuk keluar " << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		//Mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukkan karakter q
		if (baris == "q") break;;
		//menulis dan memasukkan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	//selesai dalam menulis sekarang tutup filenya
	outfile.close();;

	//membuka file dalam mode baca
	ifstream infile;

	///menunjuk ke sebuah file
	infile.open(namaFile, ios::in);

}