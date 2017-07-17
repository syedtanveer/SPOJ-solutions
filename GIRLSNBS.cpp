/***************************
*  -Problem- http://www.spoj.com/problems/PALIN/
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
#define pi 3.14159
using namespace std;
typedef long long ll;
typedef vector <int> vint;
typedef vector <vint> vvint;
typedef vector <string> vstring;
typedef vector <ll> vll;
 
template <class T> string str(T &x){stringstream s; s<<x; return s.str();}
 
int main(){
    int g,b;
    while(cin>>g>>b, g != -1 && b != -1){
        cout<<(g+b)/((g<b?g:b)+1)<<endl;
    }
    return 0;
}