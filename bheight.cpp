/**
 *	Author : hkbharath
 *	Problem : http://www.codechef.com/APRIL14/problems/BINTREE
 *	Lang : C++
 */	

#include <bits/stdc++.h>

#define FOR(a,b,c) for(int a=b;a<=c;++a)
#define RFOR(a,b,c) for(int a=b;a>=c;--a)
#define LOOP(a) FOR(xx,1,a)
#define PB(b) push_back(b)
#define MP(a,b) make_pair(a,b)
#define MOD 1000000007
using namespace std;
typedef long long int64;
typedef pair<int,int> pii;
typedef vector<int> vi;

vi nodes;

int srch(int f){
	int mid,l=0,r=nodes.size()-1;
	while(l<=r){
		mid=(l+r)/2;
		if(nodes[mid]==f)return mid;
		if(f>nodes[mid])r=mid-1;
		else l=mid+1;
	}
	return -1;
}

void solve(int tt){
	int i,j;
	scanf("%d%d",&i,&j);
	nodes.clear();
	while(i>=1){
		nodes.PB(i);
		i/=2;
	}
	int d=0;
	while(j>=1){
		int val=srch(j);
		if(val >= 0){
			printf("%d\n",d+val);
			return;
		}
		j/=2;
		d++;
	}
}

int main(){ 
	int t,it;
	for(scanf("%d",&t),it=1;it<=t;it++)
		solve(it);
}
