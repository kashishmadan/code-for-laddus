#include <stdlib.h>
#include <stdio.h>
int main()
{

    float t,countA=0,countB=0,n,a,b,i,dice;
    float pA,pB,p;
    scanf("%f",&t);
    while(t>0)
    {
        t--;
        scanf("%f %f %f",&n,&a,&b);
        countA=countB=0;
        if(n>=2)
        {
            for(i=0;i<n;i++)
            {
                scanf("%f",&dice);
                if(dice==a)
                    countA++;
                if(dice==b)
                    countB++;
            }
            pA=countA/n;
            pB=countB/n;
            p=pA*pB;
            printf("%f\n",p);
        }
    }
    return 0;
}
