#include <stdio.h>
using namespace std;
 
int main()
{
    int a=1,b,c;
    while (1)
    {
       scanf("%d %d %d",&a,&b,&c);
       if (a==0 && b==0 && c==0) break;
       if ((b-a)==(c-b))
            printf("AP %d\n",a+3*(b-a));
        else
        {
            int r=(b/a);
           printf("GP %d\n",a*r*r*r);
        }
    }
    return 0;
}
 