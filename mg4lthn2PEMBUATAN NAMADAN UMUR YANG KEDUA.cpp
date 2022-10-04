#include <iostream>
using namespace std;

int main (){
	string nama; int umur;
	cout<<"Masukan nama:"; cin>>nama;
	cout<<"Masukan umur:";cin>> umur;
	cout<<"-----------------"<<endl;
	cout<<"Terimakasih"<<nama<<endl;
	cout<<"Umur anda:"<<umur<<endl;
	(umur>17)? cout<<"Anda Dewasa"<<endl:
	cout<<"Anda Anak"<<endl;
	
}

