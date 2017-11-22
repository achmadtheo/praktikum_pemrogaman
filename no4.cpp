#include <iostream>
using namespace std;


void matrixCalculation(int mat1[3][3], int mat2[3][3]) {
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			int temp = 0;
			
			for(int k = 0; k < 3; k++) {
				temp += mat1[i][k] * mat2[k][j];
			}
			
			cout<<temp<<" ";
		}
		
		cout<<endl;
	}
}

main() {
	int mat1[3][3];
	int mat2[3][3];
	
	//Proses mengisi array matrix 1
	cout<<"Masukkan matrix 1: "<<endl;
	for(int i = 0; i < 3; i++) {		
		for(int j = 0; j < 3; j++) {
			cin>>mat1[i][j];
		}	
	}
	
	cout<<endl;
	
	//Proses mengisi array matrix 2
	cout<<"Masukkan matrix 2: "<<endl;
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cin>>mat2[i][j];
		}	
	}
	
	cout<<endl<<"Hasil perkaliannya: "<<endl;
	matrixCalculation(mat1, mat2);
}
