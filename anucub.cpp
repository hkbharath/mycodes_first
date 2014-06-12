/**
 *	Author : hkbharath
 *	Problem :
 *	Lang : C++
 */	

#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define FOR(a,b,c) for(int a=b;a<=c;++a)
#define RFOR(a,b,c) for(int a=b;a>=c;--a)
#define LOOP(a) FOR(xx,1,a)
#define PB(b) push_back(b)
#define MP(a,b) make_pair(a,b)
#define MOD 1000000009

using namespace std;
typedef long long int64;
typedef pair<int,int> pii;
typedef vector<int> vi;

int64 cnt[110];

int64 pow(int a,int64 b){
    int64 x = 1, y = a;
    while(b > 0){
        if(b%2 == 1){
            x=(x*y);
            if(x>MOD) x%=MOD;
        }
        y = (y*y);
        if(y>MOD) y%=MOD;
        b/=2;
    }
    return x;
}

int64 modi(int a){
  return pow(a,MOD-2);
}

int64 ncr(int n, int r){
	if(r>n)return 0;
	if(r==0 || n==r) return 1;
	
	if(r>n-r)r=n-r;
	int64 ret=1;
	FOR(i,1,r){
		ret = (ret*(n-i+1))%MOD;
		ret = (ret * modi(i))%MOD;
	}
	
	return ret;
}

void solve(int tt){
	int n,m,q,ar[100001];
	//cout<<ncr(32,1)<<endl;
	scanf("%d%d",&n,&q);
	FOR(i,0,n-1)scanf("%d",ar+i);
	LOOP(q){
		memset(cnt,0,sizeof(cnt));
		scanf("%d",&m);
		FOR(i,0,n-1){
			if(ar[i]<0){
				int64 z=ar[i]/m;
				ar[i]=ar[i]-z*m+m;
			}
			//cout<<ar[i];
			cnt[ar[i]%m]++;
		}
		//FOR(i,0,m-1)cout<<cnt[i]<<endl;
		int64 sum[101][101];
		memset(sum,0,sizeof(sum));
		FOR(i,0,m)
		FOR(j,0,cnt[i])
		  sum[i][(i*j)%m]=(sum[i][(i*j)%m]+ncr(cnt[i],j))%MOD;
		
		if(0)FOR(i,0,m-1){FOR(j,0,m-1)cout<<sum[i][j]<<" ";cout<<endl;}
		int64 dp[102][102];
		memset(dp,0,sizeof(dp));
		dp[0][0]=1;
		FOR(i,0,m-1)FOR(j,0,m-1)FOR(k,0,m-1)
			dp[i+1][j]=(dp[i+1][j] + (dp[i][(j-k+m)%m]*sum[i][k])%MOD)%MOD;
		if(0)FOR(i,0,m){FOR(j,0,m)cout<<dp[i][j]<<" ";cout<<endl;}
		printf("%lld\n",dp[m][0]);
	}
}

int main(){
	int t,it;
	for(scanf("%d",&t),it=1;it<=t;it++)
		solve(it);
}
