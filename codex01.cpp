/**
 *	Author : hkbharath
 *	Problem : https://www.hackerrank.com/contests/codex-6-0/challenges/awayfromlove
 *	Lang : C++
 
 incomplete
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

int v[10001],hv[10001];
vector<int> par[10001];

int ht(int root,int from){
	int ret=0;
	//if(par[root].size()==1) return 0;
	for(int i=0;i<=(par[root].size()-1);i++){
		if(par[root][i]!=from)ret = max(ret, ht(par[root][i],root));
	}
	return ret+1;
}
int sol(int root,int from){
	vector<int> hig;
	int hsol=0;
	for(int i=0;i<=(par[root].size()-1);i++){
		if(par[root][i]!=from)hig.push_back(ht(par[root][i],root));
	}
	
	for (int i=0;i<=(par[root].size()-1);i++){
		if(par[root][i]!=from)hsol=max(hsol,(sol(par[root][i],root)));
	}
	sort(hig.begin(),hig.end());
	int nn=hig.size();
	if(nn<1) return 0;
	if(nn==1)return max(hig[0]+1,hsol);
	return max(hig[nn-1]+hig[nn-2]+1,hsol);
}

void solve(int tt){
	int n;
	scanf("%d",&n);
	int a,b;
	FOR(i,0,n-2){
		scanf("%d%d",&a,&b);
		par[a].push_back(b);
		par[b].push_back(a);
	}
	printf("%d\n",sol(1,1));
}

int main(){
	int t,it;
//	for(scanf("%d",&t),it=1;it<=t;it++)
		solve(it);
}
