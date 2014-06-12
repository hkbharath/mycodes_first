#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
  int t, flag = 0;
  cin >> t;
  for(int i = 1; i <= t; i++) {
    flag = 0;
    long long int n, l, h;
    cin >> n >> l >> h;
    long long x[10000];
    for(int j = 0; j < n; j++) {
      cin >> x[j];
    }
    long long int acc = 1;
    sort(x, x+n);
    for(int j = 0; j < n; j++) {
      if(acc > h) break;

      if(acc >= l) {
	int ok = 1;
	for(int k = n-1; k >= j; k--) {
	  if(x[k]%acc)  {
	    ok = 0;
	    break;
	  }
	}
	if(ok) {
	  flag = 1;
	  break;
	}
      }
      if(acc%x[j])
	acc *= x[j];
    }
    if(acc <= h && acc >= l && flag)
      cout << "Case #" << i << ": " << acc << endl;
    else
      cout << "Case #" << i << ": NO" << endl;
  }
return 0;
}
