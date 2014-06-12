#include <bits/stdc++.h>
using namespace std;

int n,m;
char army[1000][1001];
int row[1001],col[1001];
int tot;

int ans(){
	for(int i=0;i<n;i++)
      for(int j=0;j<m;j++){
					if(row[i]==0 && col[j]==tot)
						return 1;
					if(col[j]==0 && row[i]==tot)
						return 1;
					if(army[i][j]=='W' && tot+1==row[i]+col[j])
						return 1;
					if(army[i][j]!='W' && tot==row[i]+col[j])
						return 1;		
			}
    return 0;
}

void del(int i,int j){
	army[i][j]='F';
	row[i]--;col[j]--;
	tot--;
}

void update(int x,int y){
	del(x,y);
	int adj[4][2]={1,0,-1,0,0,1,0,-1};
	for(int i=0;i<4;i++){
		int dx=x+adj[i][0],dy=y+adj[i][1];
		if(dx>=0 && dx<n && dy>=0 && dy<m && army[dx][dy]=='W')
			update(dx,dy);
	}
}

int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    tot=0;
    memset(row,0,sizeof(row));
    memset(col,0,sizeof(col));
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
      scanf("%s",army[i]);
      for(int j=0;j<m;j++)
				if(army[i][j]=='W'){
						row[i]++;
						col[j]++;
						tot++;
				}
    }
    for(int i=0;i<n;i++){
    	if(army[i][0]=='W')
    		update(i,0);
    	if(army[i][m-1]=='W')
    		update(i,m-1);
   	}	
   	for(int i=0;i<m;i++){
   		if(army[0][i]=='W')
   			update(0,i);
   		if(army[n-1][i]=='W')
   			update(n-1,i);
   	}
    if(tot<=2)
    	printf("YES\n");
    else if(ans())
    	printf("YES\n");
    else
    	printf("NO\n");	
  }
}
