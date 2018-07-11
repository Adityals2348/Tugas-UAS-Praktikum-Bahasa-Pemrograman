#include <iostream>
#include <fstream>
#include <conio.h>
#include <cstdlib>
using namespace std;

struct mahasiswa {
    char nama [30];
    char jurusan [30];
    char nim [30];
}; 

mahasiswa file; 
char nama_file[20], nama_file2[20], nama_file3[20];

int menu() {
	system ("COLOR A");

	cout << " ADITYA LINGGA SAPUTRA" << endl;
	cout << "      20170801010 " << endl << endl;;

	cout << "=================" << endl;
    cout << "   MAIN MENU	|" << endl;
    cout << "=================" << endl;
    cout << "1. Input Data" << endl;
    cout << "2. Tambah Data" << endl;
    cout << "3. Baca Data" << endl;
    cout << "4. EXIT" << endl << endl;
    cout << "Input Pilihan : ";
}

int input() {
    cout << "Input Nama File (.txt): ";
    cin.getline(nama_file,20);
    ofstream simpan (nama_file);
    system ("cls");
    cout << " Masukan Data Diri" << endl;
    cout << "=========================" << endl << endl;
    cout << "\nNama\t	: ";
    cin.getline (file.nama,30);
    simpan << file.nama << endl;
    cout << "\nNIM		: ";
    cin.getline (file.nim,30);
    simpan << file.nim << endl;
    cout << "\nJurusan		: ";
    cin.getline(file.jurusan,30); 
    simpan << file.jurusan << endl;
    cout << "\n\n\n"; system("PAUSE");
}

int tambah() {
	cout << endl << endl;
    cout << "Masukkan nama file (.txt): ";
    cin.getline (nama_file,20);
    ofstream simpan (nama_file, ios::app);
    system ("cls");
    cout << "\nNama\t	: ";
    cin.getline (file.nama,30);
    simpan << file.nama <<endl;
    cout << "\nNIM		: ";
    cin.getline (file.nim,30);
    simpan << file.nim << endl;
    cout << "\nJurusan		: ";
    cin.getline(file.jurusan,30); 
    simpan << file.jurusan << endl;
    cout << "\n\n\n"; system("PAUSE");
}

int baca() {
    cout << "Input Nama File (.txt): ";
    cin >> nama_file;
    ifstream buka (nama_file);
    if (buka.good()) {
        while (!buka.eof()) {
            system("cls");
            while(buka) { 
                buka.getline (file.nama,30);    
                cout << file.nama << endl;
            }
        }
    	cout << "\n\n\n"; system ("PAUSE");
    }
    
	else cout << "File Tidak Ditemukan" << endl;
    getch();
}


int main() {
    char kode;

    data:
    system ("cls"); menu(); cin >> kode; cin.ignore(); system ("cls");

	switch (kode) {
        case '1': input();  goto data;
        case '2': tambah(); goto data;
        case '3': baca();   goto data;
        case '4': cout << "		TERIMA KASIH^^" << endl; break;
		default : cout << "		KODE TIDAK DITEMUKAN \n\n" << endl; 
        system ("PAUSE"); goto data;
	}
    return 0;
}
