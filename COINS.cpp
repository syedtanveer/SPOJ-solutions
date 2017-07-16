/***************************
*  -Problem- http://www.spoj.com/problems/COINS/
****************************/
 
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <utility> /// pair
#include <vector>
#include <map>
#include <set>
#include <bitset>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
 
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
 
using namespace std;
typedef long long ll;
typedef vector <int> vint;
typedef vector <vint> vvint;
typedef vector <string> vstring;
typedef vector <ll> vll;
 
template <class T> string str(T &x){stringstream s; s<<x; return s.str();}
map <int, ll> dp;
ll coins(ll a){
   if(a < 12)
    return a;
   else if(dp.find(a) != dp.end()){
    return dp[a];
   }
   else
    return dp[a] = max(a, coins(a/2)+coins(a/3)+coins(a/4));
 
 
}
int main(){
 
    ll a;
    while(cin>>a)
{
     cout<<coins(a)<<endl;
}
}
 