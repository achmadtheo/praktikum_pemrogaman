#include<iostream>
using namespace std;

bool perfectnum(int n){
	int total = 0;
	for(int i=1; i <n; i++){
		if (n%i == 0)
		total += i;
	}
	return total == n;
}
main(){
	int n;
	cout<<"masukkan angka: ";
	cin>>n;
	bool hasil = perfectnum(n);
	if(hasil){
		cout<<"perfect number";
	}
	else{
		cout<<"bukan perfect number";
	}
}
