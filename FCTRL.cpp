#include <iostream>
#include <cstdio>
using namespace std;
 
int main()
{
    int num,zro=0,ite;
    scanf("%d",&ite);
    while(ite--){
    scanf("%d",&num);
    while(num/5 > 0)
    {
        num=num/5;
        zro=zro+num;
 
    }
    printf("%d\n",zro);
    zro=0;
    }
    return 0;
}
 
 