/***************************
*  -author-  syed_tanveer
*  -Problem- ADDREV
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
 
using namespace std;
 
int rev(int a){ /// reverses the number
    int revnum = 0;
    while(a>=1){
    revnum *= 10;
    revnum += a%10;
    a/=10;}
    return revnum;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        a = rev(a);
        b = rev(b);
        cout<<rev(a+b)<<endl;
        }
    return 0;
}