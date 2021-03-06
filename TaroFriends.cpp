// BEGIN CUT HERE

// END CUT HERE
#line 5 "TaroFriends.cpp"

#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <climits>
using namespace std;

class TaroFriends {
	int x,n;
	vector<int> c;
	bool check(int a,int b,int c){
		return a<=c && c<=b;
	}
	
	bool possible(int a,int b){
		if(a>b)swap(a,b);
		for(int i=0;i<n;i++){
			if(!(check(a,b,c[i]+x)||check(a,b,c[i]-x)))
				return 0;
		}
		return 1;
	}
	public:
	int getNumber(vector <int> cor, int X) {
		c=cor;
		x=X;
		sort(c.begin(),c.end());
		n=c.size();
		int ans=INT_MAX;
		if(n==1)return 0;
		for(int i=0;i<n;i++)for(int j=0;j<n;j++){
			if(i==j)continue;
			int a=c[i];int b=c[j];
			if(possible(a+x,b+x))
				ans = min(ans,abs(a-b));
			if(possible(a+x,b-x))
				ans = min(ans,abs(a+x-b+x));
			if(possible(a-x,b+x))
				ans = min(ans,abs(a-x-b-x));
			if(possible(a-x,b-x))
				ans = min(ans,abs(a-b));
			printf("%d\n",ans);
		}
		return ans;
	}
};
