#include <iostream>

using namespace std;

int main(void) {
  int t;
  cin >> t;
  for(int i = 1; i <= t; i++) {
    int r, c;
    cin >> r >> c;
    char tiles[r+1][c+1];
    int ok = 1;
    for(int j = 0; j < r; j++)
      cin >> tiles[j];
    for(int k = 0; k < r-1; k++) {
      for(int l = 0; l < c-1; l++){
	if(tiles[k][l] == '#' && tiles[k][l+1] == '#' && tiles[k+1][l] == '#' && tiles[k+1][l+1] == '#') {
	  tiles[k][l] = tiles[k+1][l+1] = '/';
	  tiles[k][l+1] = tiles[k+1][l] = '\\';
	}
	else if(tiles[k][l] == '#')
	  ok = 0;
      }

    }
    for(int k = 0; k < r; k++)
      if(tiles[k][c-1] == '#')
	ok = 0;
    for(int k = 0; k < c; k++)
      if(tiles[r-1][k] == '#')
	ok = 0;
      cout << "Case #" << i << ": " << endl;
     if(ok) {
      for(int j = 0; j< r; j++)
	cout << tiles[j] << endl; 
    }
else {
  cout << "Impossible" << endl;
}
  }
  return 0;
}
