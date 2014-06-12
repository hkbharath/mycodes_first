#include<stdio.h>
int main(){
	for(int i=1;i<10;i++)for(int j=1;j<10;j++)for(int k=1;k<10;k++)for(int l=1;l<10;l++)
		if(938*i +38*j == 52*k+61*l){printf(" %d %d %d Done\n",i,j,k);break;}
}
