/**
 *	Author : hkbharath
 *	Problem : https://www.hackerrank.com/contests/codex-6-0/challenges/acmdoc
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


int n,m,heap[10002],pri[10002],hsz,isThere[10001],added[10001];

void heapify(){
	for(int i=(hsz+1)/2;i>=0;i--){
		if(pri[heap[i]]<pri[heap[2*i]]) swap(heap[i],heap[2*i]);
		if(2*i+1 <= hsz && pri[heap[i]]<pri[heap[2*i+1]]) swap(heap[i],heap[2*i+1]);
	}
}

void add(int item,int t){
	if(hsz==n){
		heapify();
		isThere[heap[hsz]]--;
		pri[heap[hsz]]=0;
		heap[hsz]=item;
		isThere[item]++;
		added[item]=t;
	}
	else{
	 heap[++hsz]=item;
	 isThere[item]++;
	 added[item]=t;
	}
}

void solve(int tt){
	scanf("%d%d",&n,&m);
	hsz=0;
	memset(isThere,0,sizeof(isThere));
	memset(pri,0,sizeof(pri));
	memset(added,0,sizeof(added));
	while(m--){
		int a,b;
		scanf("%d%d",&a,&b);
		if(a==1){
			add(b,m);
			pri[b]++;
		}
		else {
			if(isThere[b])pri[b]++,printf("SOLVED\n");
			else printf("SORRY\n");
			for(int i=0;i<n;i++)pri[i]--;
		}
		
	}
}

int main(){
	int t,it;
	for(scanf("%d",&t),it=1;it<=t;it++)
		solve(it);
}
