#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m,p,q,a,b;
		scanf("%d%d%d%d",&n,&m,&p,&q);
		char hal[n+1][m+1];
		for(int i=0;i<n;i++)
			scanf("%s",hal[i]);
		int dp[n+1][m+1];
		pair<int,int> pa;
		vector<pair<int,int> > sol; 
		for(int i=0;i<n;i++)for(int j=0;j<m;j++){
			//printf("%d %d %d\n",i,j,dp[i][j]);
				int ok=1;
				if(hal[i][j]=='#'){
				for(int k=i;k<i+p;k++)for(int l=j;l<j+q;l++){
					if(k>=n || l>=m){
						ok=0;
						break;
					}
					ok&=(hal[k][l]=='#');
				}	
				if(ok){
					pa.first=i;
					pa.second=j;
					sol.push_back(pa);
				}
				}
		}
		n=sol.size();
		printf("%d\n",n);
		for(int i=0;i<n;i++)printf("%d %d\n",sol[i].first,sol[i].second);
	}
	
}
