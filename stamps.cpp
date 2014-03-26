/**
 *	Author : hkbharath
 *	Problem : http://www.codechef.com/COOK44/problems/DIVIDING/
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
	long long n,a;
	scanf("%lld",&n);
	long long sum=(n*(n+1))/2;
	FOR(i,0,n-1){
		scanf("%lld",&a);
		sum-=a;
	}
	if(sum==0)printf("YES\n");
	else printf("NO\n");
}

int main(){
	int t,it;
//	for(scanf("%d",&t),it=1;it<=t;it++)
		solve(it);
}
