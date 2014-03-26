#include<cstdio>
#include<algorithm>
#include<cmath>

#define mod 1000000007

using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d%d",&m,&n);
		long long vc[m+1],hc[n+1];
		for(int i=0;i<m-1;i++)scanf("%lld",vc+i);
		for(int i=0;i<n-1;i++)scanf("%lld",hc+i);
		sort(vc,vc+m-1);
		sort(hc,hc+n-1);
		int h=n-1,v=m-1,hh=0,vv=0;
		long long sum=0;
		while(h>=0 && v>=0){
			if(vc[v]>hc[h]){
				sum=(sum+(vc[v]*(hh+1))%mod)%mod;
		//		printf("%d*%d\n",vc[v],h+1);
				vv++;v--;
			}
			else if(vc[v]==hc[h]){
				sum=(sum+(vc[v]*(hh+1))%mod)%mod;
		//		printf("%d*%d\n",vc[v],h+1);
				vv++;v--;
				sum=(sum+(hc[h]*(vv+1))%mod)%mod;
		//		printf("%d*%d\n",hc[h],v+1);
				hh++;h--;
			}
			else{
				sum=(sum+(hc[h]*(vv+1))%mod)%mod;
		//		printf("%d*%d\n",hc[h],v+1);
				hh++;h--;
			}
		}
		while(h>=0)sum=(sum+(hc[h]*(vv+1))%mod)%mod,hh++,h--;
		while(v>=0)sum=(sum+(vc[v]*(hh+1))%mod)%mod,v--;
		printf("%lld\n",sum);
	}

}
