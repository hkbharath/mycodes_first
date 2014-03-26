/**
 *	Author : hkbharath
 *	Problem : Pushing Dominoes
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

int force[3002],rforce[3002];

void solve(int tt){
	int n,sol=0;
	char ip[3001];
	scanf("%d",&n);
	scanf("%s",ip);
	int st=0,end=n-1;
	
	int ct=0;
	while(st<=end && ip[st]!='R'){if(ip[st]=='L')ct=0;else ct++; st++;}
	sol+=ct;ct=0;
	while(end>=st && ip[end]!='L'){if(ip[end]=='R')ct=0;else ct++; end--;}
	sol+=ct;
	while(st<=end){
		ct=st;
		while(ct<=end && ip[ct]!='L')ct++;
		ct = ct+1-st;
		if(ct%2)sol++;
		st+=ct;
		while(st<=end && ip[st]!='R')st++,sol++;
	}
	printf("%d",sol);
}

int main(){
	int t,it;
//	for(scanf("%d",&t),it=1;it<=t;it++)
		solve(it);
}
