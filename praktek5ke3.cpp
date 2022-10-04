#include<iostream>
using namespace std;

int main(){
	int pil; float a,b,c;
	cout<<"Kalkulator Canggih"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Modulus"<<endl;
	cout<<"--------------------"<<endl;
	cout<<"Masukan pilihan anda (1-5):"; cin>>pil;
	switch (pil){
		case 1: cout<<"Masukan angka pertama:"; cin>>a;
		        cout<<"Masukan angka kedua:"; cin>>b;
		        c = a+b;
		        cout<<"Hasil Penjumlahan:"<<c<<endl;
		break;
		case 2: cout<<"Masukan angka pertama:"; cin>>a;
				cout<<"Masukan angka pertama:"; cin>>b;
				c = a+b;
				cout<<"1. Penjumlahan"<<c<<endl; 
		default: cout<<"Masih tahap pengembangan. pilih 1 atau 2"<<endl;  
		break;    
	}
}
