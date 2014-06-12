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
#define MOD 1000000007
#define ALL(a) (a.begin(),a.end())
#define ALL(a,n) (a,a+n)

using namespace std;

typedef long long int64;
typedef pair<int,int> pii;
typedef vector<int> vi;

void solve(int tt){
	int sc=0,tc=0;
	char str[100];
	scanf("%s",str);
	//printf("%c\n",str[0]);
	if(str[0]=='I'){
		printf("-1 -1\n");
		scanf("%s%s",str,str);
	}
	else{
		int n=strlen(str);
		while(str[0]!='C'){
			for(int i=0;i<n;i++)if(str[i]=='*')sc++;
			tc+=n;
			scanf("%s",str);
		}
		scanf("%s",str);
		printf("%d %d\n",tc,sc);
	}
}

int main(){
	int t=225,it;
	char dummy[15];
	scanf("%s%s",dummy,dummy);
	//scanf("%d",&t);
	for(it=1;it<t;it++){
		//printf("Case #%d: ",it);
		solve(it);
	}
}
