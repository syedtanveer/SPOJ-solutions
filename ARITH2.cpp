/**************************************************************************
*  -Problem-  http://www.spoj.com/problems/ARITH2/
**************************************************************************/
 
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
#include <list>
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
    int t;
    cin>>t;
    while(t--){
    ll a, b;
    char c;
    cin>>a;
    while(cin>>c, c!= '='){
    cin>>b;
    if(c == '*'){
        a *= b;
    }
    else if(c == '+'){
        a += b;
    }
    else if(c == '-'){
        a -= b;
    }
    else{
        a /= b;
    }
    }
    cout<<a<<endl;
    }
 
 
 
return 0;
}
 