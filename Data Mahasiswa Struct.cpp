#include <iostream>
#include <conio.h>
using namespace std;

struct mahasiswa {
	int nim;
	char nama [20];
	int umur;
	float ipk;
} mhs;

void tampil() {
	cout << "---Input---\n\n"
		 << "NIM = " << mhs.nim << endl
		 << "Nama =  " << mhs.nama << endl
		 << "Umur = " << mhs.umur <<endl
		 << "IPK = " << mhs.ipk;
}

void input() {
	cout << "---Input---\n\n";
	cout << "NIM = " << endl; 
	cin >> mhs.nim;
	cout << "Nama =  " << endl;
	cin >> mhs.nama;
	cout << "Umur = " << endl;
	cin >> mhs.umur;
	cout << "IPK = " << endl;
	cin >> mhs.ipk;
}

int main() {
	cout << "Selamat Datang";
	input();
	
	tampil();
}
