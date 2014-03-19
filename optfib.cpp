#include<cstdio>
int mod=1000000007;

void pow(long long f[2][2],long long x);

long long fib(long long x){
	long long f[2][2]={1,1,1,0};
	if(x==0)
		return 1;
	pow(f,x);
	return f[0][0];	
}

void mul(long long f[2][2],long long m[2][2]){
	long long x=((f[0][0] * m[0][0])%mod+(f[0][1] * m[1][0])%mod)%mod;
	long long y=((f[0][0] * m[0][1])%mod+(f[0][1] * m[1][1])%mod)%mod;
	long long a=((f[1][0] * m[0][0])%mod+(f[1][1] * m[1][0])%mod)%mod;
	long long b=((f[1][0] * m[0][1])%mod+(f[1][1] * m[1][1])%mod)%mod;
	f[0][0]=x;
	f[0][1]=y;
	f[1][0]=a;
	f[1][1]=b;
}

void pow(long long f[2][2],long long x){
	if(x==1 || x==0)return;
	long long m[2][2]={1,1,1,0};
	pow(f,x/2);
	mul(f,f);
	if(x%2)mul(f,m);
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long x;
		scanf("%lld",&x);
		printf("%lld\n",fib(x));
	}
}
