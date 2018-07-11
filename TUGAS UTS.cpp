#include <iostream>  //Berfungsi untuk menampulkan Perintah
#include <string>  //Berfungsi untuk deklarasi string
#include <conio.h> //Berfungsi untuk bersama dengan Getch
#include <stdio.h>

using namespace std;

int main(){
	int jumlah; //Deklarasi jumlah
	system("color A"); //berfungsi untuk mengubah warna
	string siswa; //Berfungsi Untuk Menampilkan Huruf Karakter
	
	float bahasaid3, bahasaing3, mtk3, fisika3, kimia3, biologi3; //Float untuk agar bisa menginput nilai koma atau desimal
	float bahasaid4, bahasaing4, mtk4, fisika4, kimia4, biologi4;
	float bahasaid5, bahasaing5, mtk5, fisika5, kimia5, biologi5;
	float rata_3, rata_4, rata_5, ns_rata, nr_rata, na_rata;
	float bahasaid_nr, bahasaing_nr, mtk_nr, fisika_nr, kimia_nr, biologi_nr;
	float us_bahasaid, us_bahasaing, us_mtk, us_fisika, us_kimia, us_biologi;
	float un_bahasaid, un_bahasaing, un_mtk, un_fisika, un_kimia, un_biologi;
	float bahasaid_ns, bahasaing_ns, mtk_ns, fisika_ns, kimia_ns, biologi_ns;
	float bahasaid_na, bahasaing_na, mtk_na, fisika_na, kimia_na, biologi_na;
	
	cout<<" 	================================================="<<endl;
	cout<<"	|	***** ADITYA LINGGA SAPUTRA *****	|"<<endl;
	cout<<"	|		*** 20170801010 ***		|"<<endl;
	cout<<" 	================================================="<<endl<<endl;
	
	cout<<"Input Data Siswa : "; cin>>jumlah;
	for (int x=0; x<jumlah; x++){ //Untuk looping input jumlah siswa
		cout<<endl<<endl;
		cout<<"Siswa - "<<x+1;
		cout<<endl;
		cout<<"Nama Siswa : "; cin>>siswa;
		system("cls");  //fungsi cls untuk menghilangkan tampilan diatas
		
		
		cout<<" 	================================================="<<endl;
	cout<<"	|	***** ADITYA LINGGA SAPUTRA *****	|"<<endl;
	cout<<"	|		*** 20170801010 ***		|"<<endl;
	cout<<" 	================================================="<<endl<<endl;
	 
	 cout<<"Semester 3"<<endl;
	 cout<<"Bahasa Indonesia	: "; cin>>bahasaid3;
	 cout<<"Bahasa Inggris		: "; cin>>bahasaing3;
	 cout<<"MATEMATIKA		: "; cin>>mtk3;
	 cout<<"FISIKA			: "; cin>>fisika3;
	 cout<<"KIMIA			: "; cin>>kimia3;
	 cout<<"BIOLOGI			: "; cin>>biologi3;
	 cout<<endl;
	 cout<<"=============================================="<<endl;
	 
	 system("cls");
	 
	 cout<<" 	================================================="<<endl;
	cout<<"	|	***** ADITYA LINGGA SAPUTRA *****	|"<<endl;
	cout<<"	|		*** 20170801010 ***		|"<<endl;
	cout<<" 	================================================="<<endl<<endl;
	 
	 cout<<"Semester 4"<<endl;
	 cout<<"Bahasa Indonesia	: "; cin>>bahasaid4;  //input nilai
	 cout<<"Bahasa Inggris		: "; cin>>bahasaing4;
	 cout<<"MATEMATIKA		: "; cin>>mtk4;
	 cout<<"FISIKA			: "; cin>>fisika4;
	 cout<<"KIMIA			: "; cin>>kimia4;
	 cout<<"BIOLOGI			: "; cin>>biologi4;
	 cout<<endl;
	 cout<<"=============================================="<<endl;
	 
	 system("cls");
	 
	 cout<<" 	================================================="<<endl;
	cout<<"	|	***** ADITYA LINGGA SAPUTRA *****	|"<<endl;
	cout<<"	|		*** 20170801010 ***		|"<<endl;
	cout<<" 	================================================="<<endl<<endl;
	 
	 cout<<"Semester 5"<<endl;
	 cout<<"Bahasa Indonesia	: "; cin>>bahasaid5;
	 cout<<"Bahasa Inggris		: "; cin>>bahasaing5;
	 cout<<"MATEMATIKA		: "; cin>>mtk5;
	 cout<<"FISIKA			: "; cin>>fisika5;
	 cout<<"KIMIA			: "; cin>>kimia5;
	 cout<<"BIOLOGI			: "; cin>>biologi5;
	 cout<<endl;
	 cout<<"=============================================="<<endl;
		
	 system("cls");
	 
	 cout<<" 	================================================="<<endl;
	cout<<"	|	***** ADITYA LINGGA SAPUTRA *****	|"<<endl;
	cout<<"	|		*** 20170801010 ***		|"<<endl;
	cout<<" 	================================================="<<endl<<endl;
	 
	 cout<<"Nilai Ujian Sekolah"<<endl;
	 cout<<"Bahasa Indonesia	: "; cin>>us_bahasaid;
	 cout<<"Bahasa Inggris		: "; cin>>us_bahasaing;
	 cout<<"MATEMATIKA		: "; cin>>us_mtk;
	 cout<<"FISIKA			: "; cin>>us_fisika;
	 cout<<"KIMIA			: "; cin>>us_kimia;
	 cout<<"BIOLOGI			: "; cin>>us_biologi;
	 cout<<endl;
	 cout<<"==============================================";
	 
	 system("cls");
	 
	 cout<<" 	================================================="<<endl;
	cout<<"	|	***** ADITYA LINGGA SAPUTRA *****	|"<<endl;
	cout<<"	|		*** 20170801010 ***		|"<<endl;
	cout<<" 	================================================="<<endl<<endl;
	 
	 cout<<"Nilai Ujian Nasional"<<endl;
	 cout<<"Bahasa Indonesia	: "; cin>>un_bahasaid;
	 cout<<"Bahasa Inggris		: "; cin>>un_bahasaing;
	 cout<<"MATEMATIKA		: "; cin>>un_mtk;
	 cout<<"FISIKA			: "; cin>>un_fisika;
	 cout<<"KIMIA			: "; cin>>un_kimia;
	 cout<<"BIOLOGI			: "; cin>>un_biologi;
	 cout<<"=============================================="<<endl;
	 
	 system("cls");
	 
	
	rata_3 = (bahasaid3 + bahasaing3 + mtk3 + fisika3 + kimia3 + biologi3) / 6;  //Rumus untuk menghitung Nilai Rata Rata
	rata_4 = (bahasaid4 + bahasaing4 + mtk4 + fisika4 + kimia4 + biologi4) / 6;
	rata_5 = (bahasaid5 + bahasaing5 + mtk5 + fisika5 + kimia5 + biologi5) / 6;

	 
	bahasaid_nr = (bahasaid3 + bahasaid4 + bahasaid5) / 3;  //Rumus untuk menghitung nilai rata rata tiap semester
	bahasaing_nr = (bahasaing3 + bahasaing4 + bahasaing5) / 3;
	mtk_nr = (mtk3 + mtk4 + mtk5) / 3;
	fisika_nr = (fisika3 + fisika4 + fisika5) / 3;
	kimia_nr = (kimia3 + kimia4 + kimia5) / 3;
	biologi_nr = (biologi3 + biologi4 + biologi5) / 3;
	
	bahasaid_ns = 0.7 * bahasaid_nr + 0.3 * us_bahasaid;   //Rumus untuk menghitung nilai sekolah
	bahasaing_ns = 0.7 * bahasaing_nr + 0.3 * us_bahasaing;
	mtk_ns = 0.7 * mtk_nr + 0.3 * us_mtk;
	fisika_ns = 0.7 * fisika_nr + 0.3 * us_fisika;
	kimia_ns = 0.7 * kimia_nr + 0.3 * us_kimia;
	biologi_ns = 0.7 * biologi_nr + 0.3 * us_biologi;
	
	bahasaid_na = 0.4 * bahasaid_ns + 0.6 * un_bahasaid;   //Rumus untuk menghitung Nilai Akhir
	bahasaing_na = 0.4 * bahasaing_ns + 0.6 * un_bahasaing;
	mtk_na = 0.4 * mtk_ns + 0.6 * un_mtk;
	fisika_na = 0.4 * fisika_ns + 0.6 * un_fisika;
	kimia_na = 0.4 * kimia_ns + 0.6 * un_kimia;
	biologi_na = 0.4 * biologi_ns + 0.6 * un_biologi;
	
	nr_rata = (bahasaid_nr + bahasaing_nr + mtk_nr + fisika_nr + kimia_nr + biologi_nr) / 6;
	ns_rata = (bahasaid_ns + bahasaing_ns + mtk_ns + fisika_ns + kimia_ns + biologi_ns) / 6;
	na_rata = (bahasaid_na + bahasaing_na + mtk_na + fisika_na + kimia_na + biologi_na) / 6;
	
	
	cout<<" 	================================================="<<endl;
	cout<<"	|	***** ADITYA LINGGA SAPUTRA *****	|"<<endl;
	cout<<"	|		*** 20170801010 ***		|"<<endl;
	cout<<" 	================================================="<<endl<<endl;
	
	cout<<"Nilai Rata - Rata : ";
	cout<<"\nBahasa Indonesia\t\t: "<<bahasaid_nr;
	cout<<"\nBahasa Inggris\t\t\t: "<<bahasaing_nr;
	cout<<"\nMatematika\t\t\t: "<<mtk_nr;
	cout<<"\nFISIKA\t\t\t\t: "<<fisika_nr;
	cout<<"\nKIMIA\t\t\t\t: "<<kimia_nr;
	cout<<"\nBIOLOGI\t\t\t\t: "<<biologi_nr<<endl;
	cout<<"=============================================="<<endl;
	
	cout<<endl<<endl;
	cout<<"Nilai Akhir : "<<endl;
	cout<<"\nBahasa Indonesia\t\t: "<<bahasaid_na;
	cout<<"\nBahasa Inggris\t\t\t: "<<bahasaing_na;
	cout<<"\nMATEMATIKA	\t\t: "<<mtk_na;
	cout<<"\nFISIKA\t\t\t\t: "<<fisika_na;
	cout<<"\nKIMIA\t\t\t\t: "<<kimia_na;
	cout<<"\nBIOLOGI\t\t\t\t: "<<biologi_na;
	
	cout<<endl<<endl;
	
	cout<<"=============================================="<<endl;
	cout<<"Rata Rata Nilai Sekolah\t\t: "<<ns_rata<<endl;
	cout<<"Rata Rata Nilai Akhir\t\t: "<<na_rata<<endl;
	cout<<"Rata Rata Keseluruhan\t\t: "<<nr_rata<<endl;
	cout<<"==============================================";
	
	cout<<endl<<endl;
	
	
	
	if (bahasaid_na >= 40 && bahasaing_na >= 40 && mtk_na >= 40 && kimia_na >= 40 && fisika_na >= 40 && biologi_na >= 40 && na_rata >=55){
		cout<<"LULUS";  //Untuk Menampilkan apakah LULUS atau TIDAK LULUS berdasarkan nilai yang sudah ditentukan  
		cout<<endl;
	}
	
	else{
		cout<<"TIDAK LULUS";
		cout<<endl;
	}
	
	cout<<endl<<endl;
	cout<<"	+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;
	cout<<"	-		TERIMA KASIH (^_^)	    -"<<endl;
	cout<<"	+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;
	
	getch(); //Berfungsi untuk mengehentikan Program
	
	}
}
