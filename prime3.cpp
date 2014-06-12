/**
 *	Author : hkbharath
 *	Problem : http://www.codechef.com/APRIL14/problems/POTATOES
 *	Lang : C++
 */	

#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
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
int pri[3000];

void primes(){
	FOR(i,2,3000)if(!pri[i]){
		for(int j=2;j*i<=3000;j++)
			pri[i*j]=1;
	}
}
void solve(int tt){
	int x,y;
	cin>>x>>y;
	int find=x+y+1;
	while(pri[find])find++;
	cout<<find-x-y<<endl;
}

int main(){
	int t,it;
	primes();
	for(cin>>t,it=1;it<=t;it++)
		solve(it);
}
