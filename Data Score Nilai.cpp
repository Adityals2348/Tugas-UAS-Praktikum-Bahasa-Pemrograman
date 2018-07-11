#include<iostream>
#include<conio.h>

using namespace std;
int main(){
	float tugas, uts, uas, nilai_akhir;
	string grade, keterangan;
	system ("color A");
	cout<<" --------------------------------------------------------------------------"<<endl;
	cout<<" |	================= ADITYA LINGGA SAPUTRA ===================	  |"<<endl;
	cout<<" |	  	=========== 20170801010 =============			  |"<<endl;
	cout<<" --------------------------------------------------------------------------"<<endl;
	
	cout<<endl<<endl;
	cout<<"	  ================================================="<<endl;
	cout<<"	  |		  DATA SCORING ANDA		  |"<<endl;
	cout<<"	  ================================================="<<endl;
	cout<<endl<<endl;
	cout<<"Input Nilai Tugas Anda : ";
	cin>>tugas;
	cout<<"Input Nilai UTS Anda   : ";
	cin>>uts;
	cout<<"Input Nilai UAS Anda   : ";
	cin>>uas;
	
	nilai_akhir = (0.2*tugas)+(0.3*uts)+(0.5*uas);
	
	if(nilai_akhir<=100 && nilai_akhir>=85){
		grade = "A";
		keterangan = "LULUS";
	}
	else if(nilai_akhir>=75 && nilai_akhir<85){
		grade = "B";
		keterangan = "LULUS";
	}
	else if(nilai_akhir>=65 && nilai_akhir<75){
		grade = "C";
		keterangan = "LULUS";
	}
	else if(nilai_akhir>=50 && nilai_akhir<65){
		grade = "D";
		keterangan = "TIDAK LULUS";
	}
	else{
		grade = "E";
		keterangan = "TIDAK LULUS";
	}
	system ("cls");
	
	
	cout<<" --------------------------------------------------------------------------"<<endl;
	cout<<" |	================= ADITYA LINGGA SAPUTRA ===================	  |"<<endl;
	cout<<" |	  	=========== 20170801010 =============			  |"<<endl;
	cout<<" --------------------------------------------------------------------------"<<endl;
	cout<<endl;
	cout<<"				********"<<endl;
	cout<<endl;
	
	cout<<"	    ================================================="<<endl;
	cout<<"	    |		  DATA SCORING ANDA		    |"<<endl;
	cout<<"	    ================================================="<<endl;
	
	cout<<endl<<endl;
	cout<<"Nilai Tugas Anda : "<<tugas<<endl;
	cout<<"Nilai UTS Anda 	 : "<<uts<<endl;
	cout<<"Nilai UAS Anda 	 : "<<uas<<endl;
	cout<<"Peringkat Anda 	 : "<<grade<<endl;
	cout<<"Nilai Akhir Anda : "<<nilai_akhir<<endl;
	cout<<"Keterangan	 : "<<keterangan;
}
