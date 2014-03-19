#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<iostream>
using namespace std;
int mod=1000000007;
long long fact[201];

void gen(){
	fact[0]=1;
	for(int i=1;i<201;i++)
		fact[i]=(fact[i-1]*i)%mod;
}		
int main(){
	int t;
	gen();
	scanf("%d",&t);
	while(t--){
		int n,k,a[201],x;
		for(int i=0;i<201;i++)a[i]=0;
		scanf("%d%d",&n,&k);
		for(int i=0;i<n;i++){
			scanf("%d",&x);
			a[x]++;
		}
		x=0;
		for(int i=0;i<201;i++)if(a[i])x++;
		if(k>=x)
			printf("%lld\n",fact[n]);
		else{
			x=0;
			for(int i=200;i>=0 && k;i--)
				if(a[i]){
					k--;
					x+=a[i];
				}
			printf("%lld\n",(x*fact[n-1])%mod);	
		}							
	}
}			
