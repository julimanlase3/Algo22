#include<iostream>
using namespace std;

int main(){
	int u;
	char lagi;
	atas:
		cout<<"Masukan Umur:";
		cin>>u;
		
		cout<<"Umur anda adalah: "<<u<<endl;
		cout<<"Ulang lagi (y/t):" ;
		cin>>lagi;
		
		if(lagi== 'y'){
			goto atas;
		
	
		}
}
