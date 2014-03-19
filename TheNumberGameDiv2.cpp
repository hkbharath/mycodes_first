// BEGIN CUT HERE

// END CUT HERE
#line 5 "TheNumberGameDiv2.cpp"

#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <cstdlib>

using namespace std;

class TheNumberGameDiv2 {
	public:
	int minimumMoves(int A, int B) {
		string a="",b="",rb="",ra="";
		int x=A,y=B;
		while(x)
			ra+=(x%10+'0'),x/=10;
		int n=ra.length();
		for(int i=1;i<=n;i++)a+=ra[n-i];
		while(y)
			rb+=(y%10+'0'),y/=10;
		int m=rb.length();
		for(int i=1;i<=m;i++)b+=rb[m-i];
		size_t f=a.find(b);
		int sol=0;
		if(f!=string::npos){
			sol+=n-m;
			if(f>0){
				if(m==1)sol+=1;
				else sol+=2;
			}			
			//return sol;
		}
		f=a.find(rb);
		int sol2=0;
		if(f!=string::npos){
			sol2+=n-m+1;
			//return sol;
		}
		if(sol&&sol2)return min(sol,sol2);
		if(sol)return sol;
		if(sol2)return sol2;
		return -1;		
	}
};
