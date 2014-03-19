/**
 *	Author : hkbharath
 *	Problem :
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
#define RFOR(a,b,c) for(int a=b;a>=0;--a)
#define PB(a,b) a.push_back(b);
#define MP(a,b) make_pair(a,b);
#define MOD 1000000007

typedef long long int64;

using namespace std;

void solve(int tt){
	int n,os=0;
	scanf("%d",&n);
	int ar[n+1];
	for(int i=0;i<n;i++){
		scanf("%d",ar+i);
		if(ar[i]==1 || ar[i]==0)os++;
	}
	sort(ar,ar+n);
	int64 ans=0;
	for(int i=n-1;i>=0;i--){
		if(ar[i]<3)
			break;
		ans+=i-os;
	}
	printf("%lld\n",ans);
}

int main(){
	int t,it;
	for(scanf("%d",&t),it=1;it<=t;it++)
		solve(it);
}
