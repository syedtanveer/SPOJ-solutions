/***************************
*  -author-  syed_tanveer
*  -Problem- FENCE1
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
/////////////////////////////////////
#define ff first
#define ss second
#define pb push_back
#define pi 3.14159
using namespace std;
typedef long long ll;
typedef vector <int> vint;
typedef vector <vint> vvint;
typedef vector <string> vstring;
typedef vector <ll> vll;
 
 
int main()
{
    int l;
    while(scanf("%d", &l), l != 0){
            cout<<setprecision(2)<<fixed<<.5*(l/pi)*(l/pi)*pi<<endl;
    }
    return 0;
}
 