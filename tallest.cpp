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
#define PB(a,b) a.push_back(b)
#define MP(a,b) make_pair(a,b)
#define MOD 1000000007

typedef long long int64;

using namespace std;

vector<pair<double,string> > ts;

void solve(int tt){
	int n;
	cin>>n;
	string s,os; double d;
	
	FOR(i,0,n-1){
		cin>>s>>d>>os;
		if(os == "m") d=d*1000;
		if(os == "dm") d=d*100;
		if(os == "cm") d=d*10;
		PB(ts,MP(d,s));
	}
	sort(ts.begin(),ts.end());
	RFOR(i,n-1,n-5)
		cout<<ts[i].second<<endl;
}

int main(){
	int t,it;
//	for(scanf("%d",&t),it=1;it<=t;it++)
		solve(it);
}
