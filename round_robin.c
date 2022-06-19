#include<stdio.h>

int main()
{
    int i,n,p[20],r[20],sum=0,m,s;
    float w=0;
    printf("Input how many process:");
    scanf("%d",&n);
    printf("Input Slice time:");
    scanf("%d",&s);
    for(i=1;i<=n;i++)
    {
        printf("Input process burst time-%d:",i);
        scanf("%d",&p[i]);
        r[i]=p[i];
    }

    printf("\n\n%s %20s\n","Process","Brust-Time");
    printf("%s %21s\n","-------","------------");
    for(i=1;i<=n;i++)
    {
        printf("p%d %20d\n",i,p[i]);
    }

    i=1,m=n;
    while(m!=0)
    {
       if(p[i]<=s&&p[i]>0)
       {
           sum+=p[i];
           w+=sum-r[i];
           p[i]=0;
           m--;
       }
       if(p[i]>0)
       {
           p[i]=p[i]-s;
           sum+=s;
       }
       if(i==n)
        i=0;
        i++;
    }
    w=w/(float)n;
    printf("\nAverage wating time is: %.2f\n",w);
    return 0;
}
