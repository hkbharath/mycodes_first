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
using namespace std;
typedef long long int64;
typedef pair<int,int> pii;
typedef vector<int> vi;

void solve(int tt){
	int64 n,a,b,w;
	cin>>n>>a>>b;
	FOR(i,1,n){
		cin>>w;
		int64 x=(w*a)/b;
		int64 ac = x*b%a?(x*b)/a+1:(x*b)/a;
		cout<<w-ac<<" ";
	}
}

int main(){ _
	int t,it;
//	for(cin>>t,it=1;it<=t;it++)
		solve(it);
}
