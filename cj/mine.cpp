/**
 *	Author : hkbharath
 *	Problem : https://code.google.com/codejam/contest/2974486/dashboard#s=p2
 *	Lang : C++
 */	

#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define FOR(a,b,c) for(int a=b;a<=c;++a)
#define RFOR(a,b,c) for(int a=b;a>=c;--a)
#define LOOP(a) FOR(xx,1,a)
#define PB(b) push_back(b)
#define MP(a,b) make_pair(a,b)
#define MOD 1000000007
#define ALL(a) (a.begin(),a.end())
#define ARR(a,n) (a,a+n)

using namespace std;

typedef long long int64;
typedef pair<int,int> pii;
typedef vector<int> vi;

int r,c,m;
char g[51][51];
vector<pii> qu;
int s[8][2]={-1,0,0,-1,-1,-1,1,-1,1,0,1,1,0,1,-1,1};

void solve(){
	scanf("%d%d%d",&r,&c,&m);
	FOR(i,0,r)FOR(j,0,c)g[i][j]='.';
	if(r*c-m==1 || c==1 || r==1 ){
		if(r*c-m==0){
			printf("Impossible\n");
			return;
		}
		for(int i=1;i<=r && m;i++)for(int j=1;j<=c && m;j++)
			g[i][j]='*',m--;
		g[r][c]='c';
		FOR(i,1,r){FOR(j,1,c)printf("%c",g[i][j]);printf("\n");}
		return;
	}
	
}

int main(){
	int t,it;
	scanf("%d",&t);
	for(it=1;it<=t;it++){
		printf("Case #%d:\n",it);
		solve();
	}
}
