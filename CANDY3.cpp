#include <iostream>
#include <cstdio>
 
using namespace std;
 
int main()
{
uint64_t n,num,ite,sum=0,number;
cin>>ite;
printf("\n");
while(ite--)
{
    cin>>n;
    number=n;
    while(n--)
    {
        cin>>num;
      sum=sum+(num%number);
    }
    printf("\n");
    if(sum%number==0)
        printf("YES\n");
 
       else printf("NO\n");
       sum=0;
}
   return 0;
}