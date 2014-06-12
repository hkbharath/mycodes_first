/**
 *	Author : hkbharath
 *	Problem : 24 Hour clock
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

void solve(int tt){
	char ip[6];
	int am=1;
	scanf("%s",ip);
	int hr = (ip[0]-'0')*10+ip[1]-'0';
	int min = (ip[3]-'0')*10+ip[4]-'0';
	if(hr>12){hr-=12;am=0;}
	if(am)printf("%d:%02d AM\n",hr,min);
	else printf("%d:%02d PM\n",hr,min);
}

int main(){
	int t=5,it;
	for(it=1;it<=t;it++)
		solve(it);
}
