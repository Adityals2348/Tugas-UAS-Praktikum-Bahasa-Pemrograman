#include<iostream>


using namespace std;

int main(){
	int bintang;
	system ("color A");
	cout<<endl;
	cout<<"\t\t\t ========================================"<<endl;
	cout<<"\t\t\t |  	   ADITYA LINGGA SAPUTRA	|"<<endl;
	cout<<"\t\t\t |       	20170801010		|"<<endl;
	cout<<"\t\t\t ========================================"<<endl<<endl;
	cout<<"Banyaknya Bintang =  ";
	cin>>bintang;
	system ("cls");
	
	cout<<endl;
	cout<<"\t\t\t ========================================"<<endl;
	cout<<"\t\t\t |  	   ADITYA LINGGA SAPUTRA	|"<<endl;
	cout<<"\t\t\t |       	20170801010		|"<<endl;
	cout<<"\t\t\t ========================================"<<endl<<endl;
	
	for (int a = bintang; a >= 0; a--){
		cout<<endl;
		for (int b = a; b >= 0; b--){
			cout<<" *";
		}
		
		for (int c = a; c < bintang; c++){
			cout<<"  ";
		}
		
		for (int c = a; c < bintang; c++){
			cout<<"  ";
		}
		
		for (int b = a; b >= 0; b--){
			cout<<" *";
		}
	}
		
	
	for (int a = bintang; a >= 0; a--){
		cout<<endl;
		
		for (int b = a; b <= bintang; b++){
			cout<<" *";
		}
		
		for (int c = a; c > 0; c--){
			cout<<"  ";
		}
		
		for (int c = a; c > 0; c--){
			cout<<"  ";
		}
		
		for (int b = a; b <= bintang; b++){
			cout<<" *";
		}		
	}	
	
	return 0;
}

