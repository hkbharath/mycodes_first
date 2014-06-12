#include<stdio.h>
int main()
{
	int t,a[4][4],b[4][4],k,l,c,y=1,f,i,j;
	scanf("%d",&t);
	while(t--)
	{
		c=0;
		scanf("%d",&k);
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		scanf("%d",&l);
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		for(j=0;j<4;j++)
		{
			if(a[k-1][j]==b[l-1][j])
			{
				c++;
				f=a[k-1][j];
			}
		}
		if(c>1)
		printf("Case #%d: Bad magician!\n",y);
		else if(c==0)
		printf("Case #%d: Volunteer cheated!\n",y);
		else if(c==1)
		printf("Case #%d: %d\n",y,f);
		y++;
	}
	return 0;
}
