#include <iostream>
using namespace std;

void getEven(int panjang);

int main(){
	int panjang = 0;
	cout<<"n: " ;
	cin>> panjang;
	
	getEven(panjang);
}

void getEven(int panjang){
	int angka[panjang];
	bool status = false;
	
	for (int i = 0; i < panjang; i++){
		cout<<"angka ke - "<<i+1<<"=";
		cin>> angka[i];
	}
	for(int j = 0; j < panjang; j++){
		if (angka[j]%2==0){
		cout << angka[j] << endl;
		status = true;
		}
	}
	if (!status){
		cout<<"even number not found in array"<<endl;
	}
}
