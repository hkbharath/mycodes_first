/**
 *	Author : hkbharath
 *	Problem : LONG SUM DWITE
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
#include <sstream>

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
	char s1[251],s2[251];
	cin>>s1>>s2;
	int n1=strlen(s1),n2=strlen(s2);
	int len = max(n1,n2),bsum,c=0;
	int ar[255];
	RFOR(i,len-1,0){
		n1--,n2--;
		bsum=c;
		if(n1>=0)bsum += s1[n1]-'0';
		if(n2>=0)bsum += s2[n2]-'0';
		ar[i] = bsum%10;
		c = bsum/10;
	}
	if(c)cout<<c;
	FOR(i,0,len-1)printf("%d",ar[i]);
	printf("\n");
}

int main(){
	int t=5,it;
	for(it=1;it<=t;it++)
		solve(it);
}
