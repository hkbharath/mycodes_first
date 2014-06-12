#include <bits/stdc++.h>

using namespace std;

int main(){
  int x;
  scanf("%d",&x);
  getchar();
  while(x!=0){
    char cy[22][100],ip;
    int row = 0,col=0;
    while((ip = getchar())!='\n'){
      if(col == x)
	{col=x-1; row++; }
      else if(col == -1){col = 0 ; row++; }

      if(row%2)
	cy[row][col--] = ip;
      else
	cy[row][col++] = ip;
    }
    for(int i=0;i<x;i++)
      for(int j=0;j<=row;j++)
	putchar(cy[j][i]);
    putchar('\n');
    scanf("%d",&x);
    getchar();
  }
}

