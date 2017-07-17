/***************************
*  -author-  syed_tanveer
*  -Problem- CORN
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
    int t;
    cin>>t;
    for(int i = 1; i <= t; i++){
            double r,sh,h;
            char a,b;
            string s;
            vstr s1(3);
            cin>>s;
            int k =0;
            for(size_t i=0; i < s.length(); i++){
                if((s[i]-'0' <=9 && s[i]-'0' >= 0) || s[i] =='.'){
                    s1[k].push_back(s[i]);
                }
                else{
                    k++;
                }
            }
            r = atof(s1[0].c_str());
            sh = atof(s1[1].c_str());
            h = atof(s1[2].c_str());
 
			double l = sqrt(r*r+h*h);
            int p = (int)ceil(PI*r*l*sh);
            cout<<p<<endl;
    }
    return 0;
}
 