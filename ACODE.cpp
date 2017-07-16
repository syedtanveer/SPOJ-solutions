/***************************
*  -Problem- http://www.spoj.com/problems/ACODE/
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
int main(){
    string s;
    while(cin>>s, s != "0"){
    vint dp(s.length());
    dp[0] = 1;
    for(size_t i=1; i < s.length(); i++){
        if(s[i] - '0'){
            dp[i] = dp[i - 1];
        }
        int num = (s[i - 1] -'0')*10 + (s[i] -'0');
        if(num <= 26 && num > 9){
            if(i > 1)
                dp[i] += dp[i - 2];
            else
                dp[i] += 1;
        }
        }
 
    cout<<dp[s.length() - 1]<<endl;
    }
} 