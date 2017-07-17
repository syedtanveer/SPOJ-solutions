/***************************
*  -author- syed_tanveer
*
****************************/
 
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <set>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#define endl '\n'
using namespace std;
typedef long long ll;
typedef vector <int> vint;
typedef vector <vint> vvint;
typedef vector <string> vstring;
typedef vector <ll> vll;
 
 
int main(){
int t;
while(scanf("%d", &t), t > 0)
{
  vint v;
  int x = t,candy,sum = 0;
  while(x--)
  {
      cin>>candy;
      v.push_back(candy);
      sum+=candy;
 
  }
 
if(sum%(v.size()) == 0)
{
    int counter =0;
    int mean = sum/(v.size());
    for(unsigned int i =0 ;i <v.size();i++){
 
        if(v[i] > mean){
        counter += (v[i] - mean);
        }
    }
    cout<<counter<<endl;
 
}
else
    cout<<"-1"<<endl;
}
 
 
return 0;
}