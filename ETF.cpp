/***************************
*  -Problem- http://www.spoj.com/problems/ETF/
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
 
bitset <1010> bit;
void sieve(){
for (int i = 2; i*i< 1010; i++){
    if(bit[i] == 0){
        for(int j = i*i; j < 1010; j+=i){
            bit[j] = 1;
        }
    }
}
}
 
int main()
{
    sieve();
    vint v;
    v.reserve(170);
    for(int i = 2; i < 1010; i++){
        if(bit[i]== 0){
            v.push_back(i);
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n, phi;
        cin>>n;
        phi = 1;
        int i = 0,k = 0;
             while(i*i <= n){
                i = v[k];
            int counter =0;
            while(n%i == 0){
                counter++;
                n /= i;
            }
            if (counter > 0){
            phi *= (i - 1)*pow(i,counter-1);
            }
            k++;
        }
        if(n > 1){
            phi *= (n - 1);
        }
 
        cout<<phi<<endl;
    }
    return 0;
}
 