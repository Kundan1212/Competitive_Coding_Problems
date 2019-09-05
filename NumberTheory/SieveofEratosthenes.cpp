#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll makeSieve(ll n){
	bool * isPrime = new bool[n];
	for(ll i=0;i<=n;i++){
		isPrime[i] = true;
	}
	isPrime[0] = false;
	isPrime[1] = false;
	
	for(ll i=2;i*i<=n;i++){
		if(isPrime[i]){
			for(ll j=i*i ; j<=n;j+=i){
			isPrime[j] = false;
			}
		}
	}
	ll count=0;
	for(ll i=0;i<=n;i++){
		if(isPrime[i]==true) count++;
	}
	delete [] isPrime;
	return count;
}

int main(){
    ll c=0,n;
	cin>>n;
    cout<<makeSieve(n);
	return 0;
}
