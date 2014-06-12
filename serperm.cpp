/**
 *	Author : hkbharath
 *	Problem : http://www.codechef.com/APRIL14/problems/SEAPERM/
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
using namespace std;
typedef long long int64;
typedef pair<int,int> pii;
typedef vector<int> vi;

void solve(int tt){
	int n,k,s,d;
	vector<pii> ia;
	cin>>n>>k>>s;
	vi ct[10001];
	memset(ct,0,sizeof(ct));
	FOR(i,0,n-1){
		cin>>d;
		ia.PB(MP(d,i));
		ct[d].PB(i);
	}
	sort(ia.begin(),ia.end());
	int trav=0,sum=0,ts;
	vi seq;
	int set[2001];
	memset(set,0,sizeof(set));
	FOR(i,0,n-1)cout<<ia[i].second+1<<" ";
	cout<<endl;
}

int main(){ _
	int t,it;
	for(cin>>t,it=1;it<=t;it++)
		solve(it);
}
