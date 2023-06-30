#include<iostream>
using namespace std;
int tilling(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	
	return tilling(n-1) + tilling(n-2);
}
int main(){
	int n;
	cout<<"Enter the size of the 2Xn floor:";
	cin>>n;
	cout<<"The possibble ways of tilling the floor with 2X1 floor:"<<tilling(n);
	return 0;
}
