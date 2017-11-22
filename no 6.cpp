#include<iostream>
using namespace std;

float averageplus(int input[10],bool status){
	float plus =0, min =0, jumplus=0,jummin=0;
	
	for(int i=0; i< 10; i++){
		if(input[i]>0){
			plus += input[i];
			jumplus++;
		}
		else{
			min += input[i];
			jummin++;
		}
	}
	if(status){
		return plus/ jumplus;
	}
	else{
		return min/ jummin;
	}
}
int main(){
	int input[10];
	cout<<"masukan bilangan :"<<endl;
	for(int i=0; i< 10; i++){
		cin>> input[i];
	}
	cout<<"rata rata positif ="<< averageplus(input, true)<< endl;
	cout<<"rata rata negatif ="<< averageplus(input, false)<<endl;
}
