#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter the value of n in the series :";
	cin >> n;
	if(n==1){
		cout << "x" << endl;
		return 0;
	}
	for(int i = 1; i < n ; i+=2){
		if(i==1){
			cout << "x";
			if(i+2 < n+2){
				cout << " + ";
			}
		}else{
			cout << "x^" << i << "/" << i << "!";
			if(i+2 < n+2){
				cout << " + ";
			}
		}
	}
	cout << "x^" << n << "/" << n << "!\n";

}
