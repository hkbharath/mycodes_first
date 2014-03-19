#include<cstdio>
#include<algorithm>

int main(){
	long long fact[100001];
	fact[1]=fact[0]=1;
	for(int i=2;i<100001;i++)
		fact[i]=(i*fact[i-1])%1000000007;
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int ar[n+1];
		for(int i=0;i<n;i++)
			scanf("%d",ar+i);
		std::sort(ar,ar+n);
		long long ct=1,sol[n+1];
		while(ar[n-1-ct]==ar[n-1])ct++;
		if(ct==1){
			printf("1\n");
			continue;
		}
		else{
			long long ans=1;
			sol[0]=1;
			for(int i=1;i<=ct;i++){
				sol[i]=(sol[i-1]*(ct-i+1)/fact[i])%1000000007;
				ans=(ans+sol[i])%1000000007;	
			}
			printf("%lld\n",ans);
		}
	}

}
