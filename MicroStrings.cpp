// BEGIN CUT HERE

// END CUT HERE
#line 5 "MicroStrings.cpp"

#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <climits>

using namespace std;

class MicroStrings {
	public:
	string makeMicroString(int A, int D) {
		char ans[100000],num[4];
		int c=1,ap=A;
		ans[0]='\0';
		while(ap>=0){
			sprintf(num,"%d",ap);
			strcat(ans,num);
			ap=A-D*c;
			c++;
		}
		return string(ans);
	}
};
