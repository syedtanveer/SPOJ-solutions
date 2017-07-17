/***************************
*  -author-  syed_tanveer
*  -Problem- HACKRNDM
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
#define mp make_pair
#define forall(i,n) for(int i=0;i<n;i++)
#define foru(i,a,n) for(int i=a;i<=n;i++)
#define ford(i,n,a) for(int i=n;i>=a;i--)
#define all(a)  a.begin(),a.end()
#define PI 3.1415
using namespace std;
typedef long long ll;
typedef vector <int> vint;
typedef vector <vint> vvint;
typedef vector <string> vstr;
typedef vector <ll> vll;
 
int main()
{
 
        int n, k, count = 0;
        cin>>n>>k;
        vint v(n);
        map <int, bool> m;
        forall(i, n){
            cin>>v[i];
            m[v[i]] = true;
        }
        forall(i, n){
        if(m[v[i]-k])
        {
            count++;
        }
        }
 
    cout<<count<<endl;
    return 0;
}
 