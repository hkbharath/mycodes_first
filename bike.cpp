/*
 *	Author : hkbharath
 *	Problem : BikeRace Hackerrank
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

#define FOR(a,b,c) for(int a=b;a<=c;++a)
#define RFOR(a,b,c) for(int a=b;a>=0;--a)

struct bRace{
	long long dist;
	int bike,biker;
}br;

bool cmp(bRace a, bRace b){
	return (a.dist<=b.dist);	
}
using namespace std;

void solve(int tt){
	int n,m,k;
	scanf("%d%d%d", &n, &m, &k);
	long long bike[m+1][2], biker[n+1][2];
	vector<bRace> arr;
	FOR(i,0,n-1)
		scanf("%lld%lld", &biker[i][0], &biker[i][1] );
	FOR(i,0,m-1)
		scanf("%lld%lld", &bike[i][0], &bike[i][1] );
	FOR(i,0,n-1)FOR(j,0,m-1){
		br.dist = (biker[i][0]-bike[j][0])*(biker[i][0]-bike[j][0]) + (biker[i][1]-bike[j][1])*(biker[i][1]-bike[j][1]);
		br.biker=i,br.bike=j;
		arr.push_back(br);
	}	
	int sz=arr.size();
	sort(arr.begin(),arr.end(),cmp);
	int bkr[n+1],bk[m+1],i;
	long long pans=LONG_LONG_MAX,ans=0,bbkr=0,bbk=0;
	FOR(j,0,sz-1){
		memset(bkr,0,sizeof(bkr));
		memset(bk,0,sizeof(bk));
		bbkr=bbk=0;
		ans=arr[j].dist;
		FOR(ii,0,sz-1){
			i=(ii+j)%sz;
			if(!bkr[arr[i].biker])
				bkr[arr[i].biker]=1, bbkr++;
			if(!bk[arr[i].bike])
				bk[arr[i].bike]=1, bbk++;
			if(bbk>=k && bbkr>=k){
				ans=max(ans,arr[i].dist);
				break;
			}	
		}
		//printf("%lld\n",ans);
		pans=min(ans,pans);
	}	
	printf("%lld\n",pans);
}

int main(){
	int t,it=1;
	//for(scanf("%d",&t),it=1;it<=t;it++)
		solve(it);
}
