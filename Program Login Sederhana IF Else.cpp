#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	string username, password;
	system("COLOR A");
	cout<<"				==========Silahkan Login Terlebih dahulu==========="<<endl;
	cout<<endl;
	cout<<"Masukan Data Diri Anda  : ";
	cin>>username;
	cout<<"Masukan Kode Sandi Anda : ";
	cin>>password;
	cout<<endl;
	
	if(username == "Aditya" && password == "2348"){
		cout<<"============ Selamat Anda Berhasil Masuk ===========\n";
		
	}else{
		cout<<"Maaf Data Yang Anda Masukan Salah!!";
		
	}
	
	return 0;
}
