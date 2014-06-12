/**
 *	Author : hkbharath
 *	Problem :
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
#define ALL(a) (a.begin(),a.end())
#define ALL(a,n) (a,a+n)

using namespace std;

typedef long long int64;
typedef pair<int,int> pii;
typedef vector<int> vi;

void solve(int tt){
	int t,a,b,c,x,y;
	ifstream ip,out;
	ip.open("res");
	out.open("C-small-attempt3.in");
	out>>t;t--;
	while(t--){
		out>>a>>b>>c;
		ip>>x>>y;
		if(x<0){
			cout<<a<<" "<<b<<" "<<c<<endl;
		}
	//	else if(a*b==x && y==c)cout<<"ok"<<endl;
	//	else cout<<"not ok"<<endl;
	}
}

int main(){
	int t=224,it;
//	scanf("%d",&t);
//	for(it=1;it<=t;it++){
		//printf("Case #%d: ",it);
		solve(it);
}
