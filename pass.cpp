#include<bits/stdc++.h>

using namespace std;

vector<int> pass;

int main(){
	long long fib[46],sum[46];
	fib[0]=0;
	fib[1]=1;sum[1]=1;
	for(int i=2;i<=45;i++)fib[i]=fib[i-1]+fib[i-2];
	int t,p;
	cin>>t;
	while(t--){
		cin>>p;
		int len=0;
		for(int i=1;i<=45 && p;i++){
			if(p<=fib[i]){len=i;break;}
			p-=fib[i];
		}
		p--;
		if()
	}	
}
