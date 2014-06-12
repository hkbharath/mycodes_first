/**
 *	Author : hkbharath
 *	Problem : GInteger
 *	Lang : C++
 */	

#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <climits>
#include <map>
#include <cassert>
#include <queue>

#define FOR(a,b,c) for(int a=b;a<=c;++a)
#define RFOR(a,b,c) for(int a=b;a>=c;--a)
#define LOOP(a) FOR(xx,1,a)
#define PB(a,b) a.push_back(b)
#define MP(a,b) make_pair(a,b)
#define MOD 1000000007
using namespace std;
typedef long long int64;
typedef pair<int,int> pii;
typedef vector<int> vi;

void solve(int tt){
	int n;
	cin>>n;
	int pans = n*9;
	int mul = 0;
	while(pans){
		mul+=pans%10;
		pans/=10;
	}
	
	pans = mul*n;
	int ans=pans;
	int cmul=0;
	
	while(pans){
		cmul+=pans%10;
		pans/=10;
	}
	
	if(cmul == mul) cout<<ans<<endl;
	else cout<<"NOT EXISTS"<<endl;
}

int main(){
	int t,it;
	for(scanf("%d",&t),it=1;it<=t;it++)
		solve(it);
}
