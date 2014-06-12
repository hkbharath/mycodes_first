/**
 *	Author : hkbharath
 *	Problem : http://www.codechef.com/COOK44/problems/MINXOR
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

int ia[250001],st[500002];
int n,q;
int buildst(int stt=1,int ste=n,int idx=1){
	if(ste==stt){st[idx]=ia[stt];return st[idx];}
	int mid=(stt+ste)/2;
	st[idx]=min(buildst(stt,mid,2*idx),buildst(mid+1,ste,2*idx+1));
	return st[idx];
}

int update_all(int stt,int ste,int idx,int xval){
	if(ste==stt){st[idx]^=xval;return st[idx];}
	int mid=(stt+ste)/2;
	st[idx]=min(update_all(stt,mid,2*idx,xval),update_all(mid+1,ste,2*idx+1,xval));
	return st[idx];
}

int rangemin(int l,int r,int rl=1,int rr=n,int idx=1){
	if(rl<=l && rr>=r) return st[idx];
	
	if(rl>r || rr<l) return INT_MAX;
	
	int mid=(rl+rr)/2;
	return min(rangemin(l,r,rl,mid,2*idx),rangemin(l,r,mid+1,rr,2*idx+1));
}

int xor_update(int l,int r,int xval,int rl=1,int rr=n,int idx=1){
	int mid=(rl+rr)/2;
	if(rl<=l && rr>=r){
		st[idx]=min(update_all(rl,mid,idx*2,xval),update_all(mid+1,rr,2*idx+1,xval));
		return st[idx];
	}
	if(rl>r || rr<l) return st[idx];
	
	st[idx] = min(xor_update(l,r,xval,rl,mid,2*idx),xor_update(l,r,xval,mid+1,rr,2*idx+1));
	return st[idx];
}

void solve(int tt){
	cin>>n>>q;
	FOR(i,1,n)cin>>ia[i];
	buildst();
	LOOP(q){
		int op;
		cin>>op;
		if(op==1){
			int l,r;
			cin>>l>>r;
			cout<<rangemin(l,r)<<endl;
		}
		else{
			int l,r,k;
			cin>>l>>r>>k;
			xor_update(l,r,k);
		}
	}
}

int main(){ _
	int t,it;
//	for(cin>>t,it=1;it<=t;it++)
		solve(it);
}
