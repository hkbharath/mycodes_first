// BEGIN CUT HERE

// END CUT HERE
#line 5 "MinimumSquareEasy.cpp"

#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <climits>

using namespace std;

class MinimumSquareEasy {
	public:
	long long minArea(vector <int> x, vector <int> y) {
		int n=x.size();
		long long sol=LLONG_MAX;
		for(int i=0;i<n;i++)for(int j=i+1;j<n;j++){
			vector<int> xx=x,yy=y;
			yy.erase(yy.begin()+j);
			yy.erase(yy.begin()+i);
			xx.erase(xx.begin()+j);
			xx.erase(xx.begin()+i);
			long long minx=LLONG_MAX,miny=LLONG_MAX,maxx=LLONG_MIN,maxy=LLONG_MIN;
			for(int k=0;k<xx.size();k++){
				minx=min((long long)xx[k],minx);
				miny=min((long long)yy[k],miny);
				maxx=max((long long)xx[k],maxx);
				maxy=max((long long)yy[k],maxy);
			}
			
			minx--;miny--;maxx++;maxy++;
			printf("%lld %lld\n",maxx-minx,maxy-miny);
			long long val=max((maxx-minx),(maxy-miny));
			sol=min(sol,val*val);
			
		}
		return sol;
	}
};
