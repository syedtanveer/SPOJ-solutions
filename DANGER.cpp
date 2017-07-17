/***************************
*  -author-  syed_tanveer
*  -Problem- DANGER
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
 
string str(int s){
stringstream ss;
ss<<s;
 return ss.str();
}
 
int main()
{
            string s;
            while(cin>>s, s != "00e0"){
            vstring s1(2);
            int k =0;
            for(size_t i=0; i < s.length(); i++){
                if(s[i]-'0' <=9 && s[i]-'0' >= 0){
                    s1[k].push_back(s[i]);
                }
                else{
                    k++;
                }
            }
            int a = atoi(s1[0].c_str());
            int b = atoi(s1[1].c_str());
            while(b--){
                a*=10;
            }
            bitset<32> bit(a);
           for(int i = 31; i >= 0; i--){
            if(bit[i] == 1){
                bit[i] = 0;
                break;
            }
            }
            size_t num = bit.to_ulong();
            num = num<<1;
            num+=1;
            cout<<num<<endl;
           }
 
 
    return 0;
}