#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a,b,max;
	cout<<"Input Nilai Matakuliah\n";
	cout<<"Nilai Pertama	: ";
	cin>>a;
	cout<<"Nilai Kedua	: ";
	cin>>b;
	
	if  (a>b){
		max = a;
	}
	else{
		max = b;
	}
	cout<<"\nBilangan terbesar = "<<max;
	getch();
}
