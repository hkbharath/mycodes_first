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

long long myabs(long long x){
	if(x<0) return -1*x;
	else return x;
}
void solve(int tt){
	long long n,a,b,c,d;
	scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&c,&d);
	int p1=a%2,p2=b%2,sol=0;
	//printf("%d %d %d %d\n",p1,p2,c%2,d%2);
	if(c%2==p1 && d%2!=p2)sol=1;
	else if(c%2!=p1 && d%2==p2)sol=1;
	if(sol){
		printf("-1\n");
		return;
	}
	//if(a==c && b==d){printf("0\n");return;}
	if(myabs(a-c)==myabs(b-d)){
		printf("1\n");
	}
	else
		printf("2\n");
}

int main(){
	int t,it;
	for(scanf("%d",&t),it=1;it<=t;it++)
		solve(it);
}
