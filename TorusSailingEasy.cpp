// BEGIN CUT HERE

// END CUT HERE
#line 5 "TorusSailingEasy.cpp"

#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <climits>

//not complete tuffer question
using namespace std;

class TorusSailingEasy {
	public:
	double days,set=-1;
	bool v[11][11];
	int n,m,gx,gy;
	void dfs(int x,int y){
		if(set>=0)return;
		v[x][y]=1;
		if(y==gy && x==gx){set=days;return;}
		days = days+1;
		if(!v[(x+1)%n][(y+1)%m])dfs((x+1)%n,(y+1)%m);
		if(!v[(x-1)%n][(y-1)%m])dfs((x-1)%n,(y-1)%m);
	}
	double expectedTime(int N, int M, int goalX, int goalY) {
		n=N;m=M;gx=goalX;gy=goalY;
		dfs(0,0);
		return set;
	}
};
