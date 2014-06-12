#include<stdio.h>
int main()
{
	int t,q,s,y=1;
	float a,b,c;	
	double d,t1;
	scanf("%d",&t);
	while(t--)
	{
		t1=0.0000000;
		q=0;
		d=2.0000000;
		scanf("%f%f%f",&a,&b,&c);
		if((c-a)>0)
		{
			s=((c/a)-1);
			while(q<s)
			{
				t1=t1+(a/d);
				d=d+b;
				q++;
			}
			t1=t1+(c/d);
		}
		else
		{
			t1=(c/d);
		}
		printf("Case #%d: %.7lf\n",y,t1);
		y++;
	}
}
