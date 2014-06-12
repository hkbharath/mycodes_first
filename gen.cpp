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

void solve(int tt){
	int x=rand()%441;
	while(x--)rand();
	int n=1+rand()%10000;
	int q=1+rand()%30;
	cout<<n<<" "<<q<<endl;
	while(n--)cout<<((rand()%1000000000)*(rand()%42==0?-1:1))<<" ";
	while(q--)cout<<1+rand()%100<<endl;
}

int main(){
	int t=1,it;
	cout<<t<<endl;
	for(it=1;it<=t;it++)
		solve(it);
}
