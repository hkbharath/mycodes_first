#include<bits/stdc++.h>
int main(){
  int t,X,n;
  char arr[101][101];
  double cnt;
  scanf("%d",&t);
  X=1;
  while(t--){
    double op[101],oop[101],cnt[101],att[101];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    	scanf("%s",arr[i]);
    for(int i=0;i<n;i++){
      cnt[i]=0;att[i]=0;
    	for(int j=0;j<n;j++){
		if(arr[i][j]=='1'){
			cnt[i]++;
			att[i]++;
		}
		if(arr[i][j]=='0')
		  att[i]++;
	}
    }
    memset(op,0,sizeof(op));
   for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		if(arr[i][j]=='1'){
			op[i]+=(cnt[j])/(att[j]-1);
		}
		if(arr[i][j]=='0'){
			op[i]+=(cnt[j]-1)/(att[j]-1);
		}
	}
	op[i]=op[i]/att[i];
   }
   memset(oop,0,sizeof(oop));
   for(int i=0;i<n;i++ ){
     for(int j=0;j<n;j++){
     	if(arr[i][j]=='1'||arr[i][j]=='0'){
		oop[i]+=op[j];
	}
     }
     oop[i]=oop[i]/att[i];
   }
   printf("case #%d:\n",X++);
   for(int i=0;i<n;i++)     
   {
     double rip;
    rip= 0.25 * (cnt[i]/att[i]) + 0.50 * op[i] + 0.25 * oop[i];
    printf("%.10lf\n",rip);
   }
  }

}
