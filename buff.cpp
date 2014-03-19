/*
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
#include <limits>
#include <map>
#include <cassert>

#define FOR(a,b,c) for( int a = b ; a <= c; ++a)
#define RFOR(a,b,c) for( int a = b ; a >= c ; --a)

using namespace std;

void solve(int tt){
	int n;
	scanf("%d",&n);
	int val[n+1];
	FOR(i,0,n-1){
		scanf("%d",val+i);
	}
	int p_profit=0, maxval=0;
	RFOR(i,n-1,0){
		if( val[i] > maxval )
			maxval = val[i];
		p_profit+= maxval-val[i];	
	}
	printf("%d\n",p_profit);
}

int main(){
	int t,it;
	for(scanf("%d",&t),it=1;it<=t;it++)
		solve(it);
}
