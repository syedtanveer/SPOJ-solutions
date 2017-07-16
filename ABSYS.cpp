/***************************
*  -author-  syed_tanveer
*  -Problem- ABSYSS
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
 
using namespace std;
typedef long long ll;
typedef vector <int> vint;
typedef vector <vint> vvint;
typedef vector <string> vstring;
typedef vector <ll> vll;
 
int toInt(string s){
    int num = 0;
    for(int i= 0; i < s.length(); i++){
        if(s[i] >= 97)
        return -1;
    else
         num = num*10 + (s[i] - '0');
    }
    return num;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        vstring str(5);
        vll num(3);
        cin>>str[0]>>str[1]>>str[2]>>str[3]>>str[4];
        int a,b,c;
        a = toInt(str[0]);
        b = toInt (str[2]);
        c = toInt(str[4]);
        if(a == -1){
            a = c-b;
        }
        else if(b == -1){
            b = c-a;
        }
        else if(c == -1){
            c = a+b;
        }
        cout<<a<<" "<<str[1]<<" "<<b<<" "<<str[3]<<" "<<c<<endl;
        }
    return 0;
}