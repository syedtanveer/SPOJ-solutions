/***************************
*  -author- syed_tanveer
*
****************************/
 
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <set>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#define endl '\n'
using namespace std;
typedef long long ll;
typedef vector <int> vint;
typedef vector <vint> vvint;
typedef vector <string> vstring;
typedef vector <ll> vll;
 
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> male(n);
        vector <int> fmale(n);
        for(int i = 0; i < n; i++)
            cin>>male[i];
 
        for(int i = 0; i < n; i++)
            cin>>fmale[i];
 
        sort(male.begin(), male.end());
        sort(fmale.begin(), fmale.end());
 
 
        int sum = 0;
        for(int i = 0; i < n; i++){
          sum+=(male[i]*fmale[i]);
        }
        cout<<sum<<endl;
 
        }
    return 0;
}
 