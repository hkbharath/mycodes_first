#include <bits/stdc++.h>
using namespace std;
char ms[6000000];
int  main(){
    int t;
      scanf("%d",&t);
        while(t--){
	      int n;
	          char k[10];
	scanf("%d %s",&n,k);
			      int l = strlen(k);
			          int tmp=0;
				   
				      for(int i=1;i<=n;i++){
					      tmp+=sprintf(ms+tmp,"%d",i);
					          }
					      //printf("%d\n",ll);
					      int sol=0;
					          for(int i=0;i<tmp;i++){
						  if(strncmp(ms+i,k,l)==0)
							    	sol++;
							      }
						      printf("%d\n",sol);
						        }
}

