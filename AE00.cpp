/***************************
*  -author- syed_tanveer
*  -problem code : AE00
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
            int n;
            cin>>n;
            int count = 0;
            for(int j = 1;  j*j<= n; j++)
            for(int i = j; i*j <= n; i++){
                  {
                    count ++;
                }
            }
            cout<<count<<endl;
 
 
 
    return 0;
}
 