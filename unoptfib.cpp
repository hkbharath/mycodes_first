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
#define RFOR(a,b,c) for(int a=b;a>=c;--a)
#define LOOP(a) FOR(xx,1,a)
#define PB(a,b) a.push_back(b)
#define MP(a,b) make_pair(a,b)
#define MOD 1000000007
using namespace std;
typedef long long int64;
typedef pair<int,int> pii;
typedef vector<int> vi;

int z[41],o[41];

void solve(int tt){
	int n;
	scanf("%d",&n);
	printf("%d %d\n",z[n],o[n]);
}

int main(){
	z[0]=1;
	o[1]=1;
	FOR(i,2,40){
		z[i] = z[i-1]+z[i-2];
		o[i] = o[i-1]+o[i-2];	
	}
	int t,it;
	for(scanf("%d",&t),it=1;it<=t;it++)
		solve(it);
}