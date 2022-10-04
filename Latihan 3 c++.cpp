#include <iostream>
using name space std;

#define tinggi 10
#define garis"......."

int main (){
	
	const double pi = 3.14;
	
	double vol,r;
	
	cout<<"Program mencari volume kerucut"<<endl;a
	cout<<garis <<endl;
	
	cout<<"Masukan jari-jari: "; cin>>r;
	
	vol=(pi * r * r *tinggi)/3;
	
	cout<<"Volume kerucut adalah: "<<vol;
	
	return 0 ;
}
