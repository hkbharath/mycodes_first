/**
 *	Author : hkbharath
 *	Problem : https://www.hackerrank.com/contests/infinitum-mar14/challenges/summing-the-n-series
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




long long mul(long long a, long long b){
	if(a <= 1000000 || b<= 1000000) return (a*b)%MOD;
	if(a%2 && b%2 ) return ((4*mul(a/2,b/2))%MOD + mul(2,b/2) + mul(2,a/2) + 1)%MOD;
	if(a%2 && b%2 == 0) return ((4*mul(a/2,b/2)) + mul(2,b/2))%MOD;
	if(a%2==0 && b%2) return ((4*mul(a/2,b/2))%MOD + mul(2,a/2))%MOD;
	return (4*mul(a/2,b/2))%MOD;
}

void solve(int tt){
	long long n;
	cin>>n;
	cout<<mul(n,n)<<endl;
}

int main(){
	int t,it;
	for(scanf("%d",&t),it=1;it<=t;it++)
		solve(it);
}
