#include<iostream>

using namespace std;

bool isPrime(int n){
	if(n==2) return false;
	if(n%2==0) return false;
	for(int i=3;i*i<=n;i++){
		cout<<i<<"\n";
		if(n%i==0) return false;
	}
	return true;
}

int main(){
	//int res = isPrime(7);
	int res2 = isPrime(7);
	cout<<res2<<"\n";
	return 0;
}
