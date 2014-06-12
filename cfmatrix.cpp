/**
 *	Author : hkbharath
 *	Problem :
 *	Lang : C++
 */	

#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define FOR(a,b,c) for(int a=(b);a<=(c);++a)
#define RFOR(a,b,c) for(int a=(b);a>=(c);--a)
#define LOOP(a) FOR(xx,1,a)
#define PB(b) push_back(b)
#define MP(a,b) make_pair(a,b)
#define MOD 1000000007
using namespace std;
typedef long long int64;
typedef pair<int,int> pii;
typedef vector<int> vi;

int64 poss[1562501],pos[1562501];

void solve(int tt){
	int n;
	cin>>n;
	long long sol=0;
	for(int i=1;i<=n/2;i++){
		if(n-i==i)sol+=poss[i*i-1];
		else sol+=2*poss[i*(n-i)-1];
	}
	cout<<sol<<endl;
}

int main(){ _
	for(int i=2;i<=1562500;i++)
		for(int j=1;j*i<=1562500;j++)
			pos[i*j]+=1;
	poss[1]=1;
	for(int i=2;i<=1562500;i++)poss[i]=poss[i-1]+pos[i]+1;
	//cout<<"done";
	
	int t,it;
	for(cin>>t,it=1;it<=t;it++)
		solve(it);
}
