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
	int n,k;
	cin>>n>>k;
	if(k<(n/2) || (k!=0 && n==1)){
		cout<<"-1";
		return;
	}
	if(k==(n/2)){
		FOR(i,1,n)cout<<i<<" ";
		return;
	}
	int slot=n/2;
	int64 o=k-slot+1,t=2*o,tr,f;
	cout<<o<<" "<<t<<" ";
	int ct=1,ptd=2;
	n-=2;
	while(n){
		if(ct!=o && ct+1 !=o && ct!=t && ct+1!=t){
			if(n==1)cout<<ct<<" ",n--;
			else cout<<ct<<" "<<ct+1<<" ",n-=2;
		}
		ct+=2;
	}
}

int main(){ _
	int t,it;
//	for(cin>>t,it=1;it<=t;it++)
		solve(it);
}
