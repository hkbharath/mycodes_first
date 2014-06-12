#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<int,int> range;
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n,k,p;
        range arrk[505],arrp[505];

        scanf("%d %d %d",&n,&k,&p);

        if(p>k)
        {
            printf("No\n");
            continue;
        }

        for(int i=1;i<=k;i++)
            scanf("%d %d",&arrk[i].first,&arrk[i].second);

        for(int i=1;i<=p;i++)
            scanf("%d %d",&arrp[i].first,&arrp[i].second);
        sort(arrk+1,arrk+k);
        sort(arrp+1,arrp+p);

        bool b=true;
        int j=1;
        for(int i=1;i<=k;i++)
        {
            int li = arrk[i].first;
            int ri = arrk[i].second;
            int ai = arrp[j].first;
            int bi = arrp[j].second;
            if(li>bi && ai<=bi)
            {
                j++;
                ai = arrp[j].first;
                bi = arrp[j].second;
            }

            if(li <= ri && li<ai) //if li & ri both less than ai
            {
                if(li<=arrp[p].second && ri<=arrp[p].second){continue;}
                else {b=false;break;}
            }

            if(li <= ri && ai <= bi)// asc & asc
            {
                if(li>=ai && ri<=bi){continue;}
                else {b=false;break;}
            }

            if(li>ri && ai>bi) // desc & desc
            {
                if(li>=ai && ri<=bi){continue;}
                else {b=false;break;}
            }

            if(li <= ri && ai > bi) // asc & desc
            {
                if(li>=ai && ri<=n){continue;}
                else {b=false;break;}
            }

            if(li > ri && ai <= bi) {b=false;break;}
        }
        if(b)
        printf("Yes\n");
        else
        printf("No\n");
    }
    return 0;
}
