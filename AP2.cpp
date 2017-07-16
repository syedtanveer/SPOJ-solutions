#include <stdio.h>
 
int main()
{
    int ite;
    long long x,y,z,d,a,n,i,k;
    scanf("%d",&ite);
 
    while (ite--)
    {
        scanf("%lld %lld %lld",&x, &y, &z);
        n=(2*z/(x+y));
        d = (y-x)/(n-5);
        a = x-2*d;
        printf("%llu\n",n );
        for (i=0 ;i < n; ++i)
        {
            printf("%llu ",a+i*d );
        }
        printf("\n");
    }
    return 0;
}
 