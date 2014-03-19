#include<cstdio>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int c[n+1][n+1],h[n+1][n+1],choosec[n+1],chooseh[n+1];
		for(int i=0;i<n;i++)for(int j=0;j<n;j++)
			scanf("%d",&h[i][j]);
		for(int i=0;i<n;i++)for(int j=0;j<n;j++)
			scanf("%d",&c[i][j]);
		int pref=0;
		int fchoosenc[n+1],fchosenh[n+1],chosen[n+1],final[n+1];
		memset(final,0,sizeof(final));
		memset(fchoosenc,0,sizeof(fchoosenc));
		memset(fchosenh,0,sizeof(fchosenh));
		int o=1;
		while(o--){
			memset(chosen,0,sizeof(chosen));
			for(int i=0;i<n;i++){
				choosec[i]=0;
				pref=n+1;
				for(int j=0;j<n;j++){
					int k;
					for(k=0;k<n;k++)
						if(c[h[i][j]-1][k]==i+1)break;
					//printf("%d %d %d\n",i,j,k);
					if(pref>k && !chosen[h[i][j]-1] && !fchosenh[h[i][j]-1]){
						pref=k;
						choosec[i]=h[i][j]-1;
					}
				}
				//printf("%d\n",choose[i]);
				chosen[choosec[i]]=1;
			}
			memset(chosen,0,sizeof(chosen));
			for(int i=0;i<n;i++){
				chooseh[i]=0;
				pref=n+1;
				for(int j=0;j<n;j++){
					int k;
					for(k=0;k<n;k++)
						if(h[c[i][j]-1][k]==i+1)break;
					//printf("%d %d %d\n",i,j,k);
					if(pref>k && !chosen[c[i][j]-1] && !fchoosenc[c[i][j]-1]){
						pref=k;
						chooseh[i]=c[i][j]-1;
					}
				}
				//printf("%d\n",choose[i]);
				chosen[chooseh[i]]=1;
			}
			for(int i=0;i<n;i++){
				final[i]=choosec[i];
				
			}
		}		
		int sc=0,sh=0;
		for(int i=0;i<n;i++){
			//printf("%d\n",choose[i]);
			if(final[i]==h[i][0]-1)sh++;
			if(c[final[i]][0]==i+1)sc++;
		}		
		printf("%d %d\n",sh,sc);	
	}
}
