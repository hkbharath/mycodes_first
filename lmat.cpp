#include<stdio.h>

int main(){
	int n,m
	scanf("%d%d",&n,&m);
	int a[n+1][m+1],p[n+1][m+1];
	struct{
		int x1,x2,y1,y2,k;
	}s[n+m];	
	for(int i=0;i<n;i++)for(int j=0;j<m;j++)scanf("%d",&a[i][j]);
	for(int i=0;i<n;i++)for(int j=0;j<m;j++)scanf("%d",&p[i][j]);
