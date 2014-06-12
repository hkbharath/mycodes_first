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
typedef vector<pii> vip;

void solve(int tt){
	int n,k,p,a,b;
	cin>>n>>k>>p;
	vip chef,kid;
	LOOP(k){
		cin>>a>>b;
		chef.PB((MP(a,b)));
	}
	sort(chef.begin(),chef.end());
	LOOP(p){
		cin>>a>>b;
		kid.PB((MP(a,b)));
	}
	sort(kid.begin(),kid.end());
	if(p>k){cout<<"No\n";return;}
	int kp=0,cp=0,used=k;
	while(cp<k && kid[kp].first!=chef[cp].first)cp++;
	if(cp==k){cout<<"No\n";return;}
	
	while(kp<kid.size()){
		if(used && cp==chef.size()){cp=0;}
		if(kid[kp].first!=chef[cp].first){cout<<"No\n";return;}
		
		while(cp<chef.size() && kid[kp].second!=chef[cp].second)cp++,used--;
		
		if(used && cp==chef.size()){
			cp=0;
			while(used && kid[kp].second!=chef[cp].second)cp++,used--;
			if(!used && kid[kp].second!=chef[cp].second){cout<<"No\n";return;}
		}
		
		if(!used && kid[kp].second!=chef[cp].second){cout<<"No\n";return;}
		kp++;cp++;used--;
	}

	cout<<"YES\n";
}

int main(){ 
	int t,it;
	for(cin>>t,it=1;it<=t;it++)
		solve(it);
}
