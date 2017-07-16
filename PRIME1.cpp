#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstring>
#define RANGE 100001
#define LIMIT 31623
 
using namespace std;
bool mark[LIMIT];
int primes[3401];
bool arr[RANGE];
void sieve()
{
  memset(mark, true, sizeof mark);
  mark[0] = mark[1] = false;
  for(int i = 2; i*i < LIMIT; i++ )
  {
      if(mark[i] == true)
      {
          for(int j=i; i*j < LIMIT; j++)
          {
              mark[i*j] = false;
          }
      }
  }
int k=0;
for(int j=0; j < LIMIT; j++)
          {
              if(mark[j] == true){
              primes[k] = j;
              k++;
              }
          }
 
}
 
void s_sieve(int a,int b)
{
  memset(arr, true, sizeof arr);
  for(int i=0; i < 3401 ; i++)
  {
      int k = primes[i];
      if(k <= b)
      {
      int s = (a/k);
      int p = s*k;
      for(int j = p; j <= b; j+=k)
      {
          if( j >= a && j != k )
          {
              arr[j-a] = false;
          }
      }
      }else break;
      }
 
 
 
for(int i = 0; i < b-a+1; i++)
{
    if(arr[i] == true && a+i != 1)
        cout<<a+i<<endl;
}
 
}
 
 
int main()
{
    int ite;
    cin>>ite;
    sieve();
    while(ite--)
    {
        int a=1,b=1;
        cin>>a>>b;
        s_sieve(a,b);
        cout<<endl;
    }
 
    return 0;
}