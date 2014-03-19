#include<cstdio>
#include<cmath>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

int par[100001],mod=1000000007,v[100001],sz[100001];

int root(int a){
	while(par[a]!=a)a=par[a];
	return a;
}	

int join(int a,int b){
	a=root(a);
	b=root(b);
	if(a==b)return 0;
	if(sz[a]>sz[b])
		par[b]=a,sz[a]+=sz[b];
	else
		par[a]=b,sz[b]+=sz[a];
	return 1;	
}			
	
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		memset(par,0,sizeof(par));
		int n,m,a,b;
		scanf("%d%d",&n,&m);
		int cp=n;
		for(int i=0;i<n;i++)par[i]=i,sz[i]=1;
		for(int i=0;i<m;i++){
			scanf("%d%d",&a,&b);
			if(join(a-1,b-1))
				cp--;	
		}
		long long sol=1;
		for(int i=0;i<n;i++){
			if(par[i]==i)
				sol=(sol*sz[i])%mod;	
		}
		printf("%d %lld\n",cp,sol);
	}
}	
