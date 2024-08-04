#include <iostream>

using namespace std;

int sum(int a, int b){
	return a+b;
}

int main(){
	int a,b;
	cout << "Enter the two numbers:" << endl;
	cout << "a:";cin >> a;
	cout << "b:";cin >> b;
	cout <<"Sum:" <<sum(a,b) << endl;
}
