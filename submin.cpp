#include<stdio.h>
#include<math.h>

int main(){
	int n,a[51];
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d",a+i);
	int q,b,x,y;
	long long ans;
	scanf("%d",&q);
	while(q--){
		scanf("%d",&b);
		ans=0;
		int ct=0;
		for(int i=0;i<n;i++)
			if(a[i]==b){
				x=0;y=0;
				int ii=i-1;
				while(!ct && ii>=0 && a[ii]>=b){
					y++,ii--;
				}
				if(ct)ct--;
				ii=i+1;				
				while(ii<n && a[ii]>=b){
					if(a[ii]==b)ct++;			
					x++,ii++;
				}
				ans+=(x+1)*(y+1);
				//printf("%lld %d %d\n",ans,x,y);
			}
		printf("%lld\n",ans);
	}
}
				
