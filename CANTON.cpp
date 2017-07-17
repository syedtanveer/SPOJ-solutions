/***************************
*  -author-  syed_tanveer
*  -Problem- CANTON
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
#define endl '\n'
#define f(n) n*(n+1)/2
using namespace std;
typedef long long ll;
typedef vector <int> vint;
typedef vector <vint> vvint;
typedef vector <string> vstring;
typedef vector <ll> vll;
 
 
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int ds = (-1+sqrt(1 + 8*n)) / 2;    /// diagonals to skip
        int position = n - f(ds);                     /// position in diagonal in which num exist
 
        int numerator = position <= 1 ? ds+position : ds-position+2;
        int denominator = position <= 1 ? 1 : position;
        if(ds%2 == 0)
        cout<<"TERM "<<n<<" IS "<<numerator<<"/"<<denominator<<endl;
        else
            cout<<"TERM "<<n<<" IS "<<denominator<<"/"<<numerator<<endl;
    }
    return 0;
}