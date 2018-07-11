#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
using namespace std;


struct Data_KTP {
	string noID;
	string nama;
	string jenis_kelamin; //’L’ atau ‘P’
	string agama;
	string tanggal;
	string status;
	string ttl;
	string pekerjaan;
	string alamat;
};

typedef Data_KTP data_ktp;
	Data_KTP *p;

int main () {
	int pilihan, menu, jumlah;
	p=&Data_KTP;
	
	while (pilihan !=5) {
		cout << "			   *** ADITYA LINGGA SAPUTRA ***" << endl;
		cout << " 				*** 20170801010 ***" << endl << endl;
		cout << "----------------------------------------------------\n";
        cout << "1. Menambah data\n";
        cout << "2. Mencari data\n";
        cout << "3. Menampilkan data\n";
        cout << "4. Mengedit data\n";
        cout << "5. Keluar\n";
        cout << "----------------------------------------------------\n";
        cout << "Pilih Salah Satu  : "; cin >> pilihan;	
        
        if (pilihan == 1) {
        	system ("cls");
        	cout << "Masukan Jumlah Data : "; cin >> jumlah;
        	system ("cls");
        	for (int i = 0; i < jumlah; i++){
				cout << "DATA ke - " << i + 1 << endl;
        		cout <<"\n PENAMBAHAN DATABASE KTP\n";
     			cout <<"\n NIK (max 5 karakter)		:  "; cin >> p->noID;
     			cout <<"Nama		:  "; cin >> p->nama;
     			cout <<"Jenis Kelamin		: "; cin >> p->jenis_kelamin;
        		cout <<"Agama		:  "; cin >> p->agama;
       			cout <<"Status Perkawinan		:  "; cin >> p->status;
        		cout <<"Pekerjaan		:  "; cin >> p->pekerjaan;
        		cout <<"Tempat Lahir              	:  "; cin >> p->ttl;
        		cout <<"Tanggal Lahir (DD MM YYYY)	:  "; cin >> p->tanggal;
        		cout <<"Alamat	: " ; cin >> p->alamat;
				cout << endl << endl;
			}
		}
		if (pilihan == 2) {
			
			
		}
		if (pilihan == 3) {
			system ("cls");
			for (int i = 0; i < jumlah; i++) {
				cout << "=========================="<<endl;
				cout << "NIK	: " << p->noID << endl;
				cout << "Nama	: " << p->nama << endl;
				cout << "Jenis Kelamin	: " << p->jenis_kelamin << endl;
				cout << "Agama	:  " << p->agama << endl;
				cout << "Status Perkawinan	: " << p->status << endl; 
				cout << "Pekerjaan	: " << p->pekerjaan << endl;
				cout << "Tempat Lahir	: " << p->ttl << endl;
				cout << "Tanggal Lahir	: " << p->tanggal << endl;
				cout << "Alamat	: " << p->alamat << endl;
				cout << "==========================="<<endl;
				cout<<endl;
			}
		}
	}
}
