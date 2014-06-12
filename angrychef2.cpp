/**
 *	Author : hkbharath
 *	Problem : http://www.codechef.com/APRIL14/problems/TANGDIV/
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
typedef pair<int64,int64> pll;

vector<pii> chef,kid;
int n,k,p;

bool check(int p,int l,int r){
	if(chef[p].first>chef[p].second)chef[p].second+=n;
	return (chef[p].first>=r && chef[p].second<=l);	
}

void solve(int tt){
	kid.clear();
	chef.clear();
	cin>>n>>k>>p;
	int a,b;
	LOOP(k){
		cin>>a>>b;
		chef.PB(MP(a,b));
	}
	
	LOOP(p){
		cin>>a>>b;
		kid.PB(MP(a,b));
	}
	
	if(p>k){cout<<"No"<<endl;return;}
	sort(chef.begin(),chef.end());
	sort(kid.begin(),kid.end());
	
	if(0)FOR(i,0,k-1)cout<<chef[i].first<<" "<<chef[i].second<<endl;
	int aced=0;
	while(aced<k && kid[0].first!=chef[aced].first){
		chef[aced].first+=n;
		chef[aced].second+=n;
		aced++;
	}
	if(aced==k){cout<<"No"<<endl;return;}
	sort(chef.begin(),chef.end());
	aced=0;
	FOR(i,0,p-1){
		int r=kid[i].first,l=kid[i].second;
		if(r>l)l+=n;
		if(r!=chef[aced].first){cout<<"No"<<endl;return;}
		while(aced<k && check(aced,l,r))aced++;
		//cout<<aced<<endl;
	}
	cout<<"Yes"<<endl;
}

int main(){ _
	int t,it;
	for(cin>>t,it=1;it<=t;it++)
		solve(it);
}
