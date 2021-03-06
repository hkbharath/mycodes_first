/**
 *	Author : hkbharath
 *	Problem : https://www.hackerrank.com/contests/infinitum-mar14/challenges/a-chocolate-fiesta
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

int64 pow(int x,int n){
	if(n==0) return 1;
	if(n==1) return x;
	int64 res = (pow(x,n/2)*pow(x,n/2))%MOD;
	if(n%2) res=(res*x)%MOD;
	return res;
}

void solve(int tt){
	int n,a;
	scanf("%d",&n);
	int count=0,subcount=0;
	LOOP(n){
		scanf("%d",&a);
		if(a%2==0)count++;
		else subcount++;
	}
	count+=subcount/2;
	printf("%lld\n",pow(2,count)%MOD - 1);	
}

int main(){
	int t,it;
//	for(scanf("%d",&t),it=1;it<=t;it++)
		solve(it);
}
