#include<iostream>	
#include<vector>
using namespace std;

vector<bool> primes;

bool isPrime(int n){
	for(int i = 2; i < n; i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

void seive(int n){
	for(int i = 2 ; i*i < n ; i++){
		if(primes[i] && isPrime(i)){
			for(int j = 2*i ; j <= n ; j+=i){
				primes[j]=false;
			}
		}
	}
}

void primeDisplay(int l, int r){
	cout << "All the prime numbers" << endl;
	for(int i = l ; i <= r ; i++){
		if(primes[i])
		cout << i << " ";
	}
	cout << endl;
}

int main(){
	int l,r;
	cout << "Enter the starting point :" ;
	cin >> l;
	cout << "Enter the ending point :" ;
	cin >> r;
	primes.assign(max(l,r)+1, true);
	primes[1]=false;
	primes[0]=false;
	seive(max(l,r));
	primeDisplay(l, r);
}
