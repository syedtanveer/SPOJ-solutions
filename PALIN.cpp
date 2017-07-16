/***************************
*  -Problem- http://www.spoj.com/problems/PALIN/
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
 
int main(){
    int t;
    cin>>t;
    string num;
    while(t--){
            cin>>num;
            int numsize = num.size();
            if((num[0] -'0' == 9) && (num[numsize-1] - '0') == 9){
                bool isAllNine = true;
                for(int i = 1; i < numsize-1; i++){
                    if(num[i] - '0' != 9){
                        isAllNine = false;
                    }
                }
                if(isAllNine == true){
                    cout<<'1';
                    for(int i = 0; i <numsize-1; i++){
                        cout<<'0';
                    }
                    cout<<'1'<<endl;
                     continue;
                }
 
            }
            int i = 0, j = numsize - 1;
            bool isPalin = true;
            while(i<=j){
                if(num[i] != num[j]){
                   isPalin = false;
                }
                i++; j--;
            }
             int mid = numsize / 2;
                    if(numsize%2){
                        i = mid;
                    }
                    else{
                        i = mid - 1;
                    }
                    j  = mid;
            if(isPalin == true){
                    if(num[i] - '0' == 9 && num[i] - '0' == 9){
                       while(num[i] - '0' == 9 && num[j] - '0' == 9){
                        num[i] = '0', num[j] = '0';
                        i--; j++;
                       }
                       num[i] = num[i] + 1;
                       num[j] = num[j] + 1;
                    }
                    else{
                        num[mid]++;
                        if(numsize%2 == 0)
                            num[mid - 1]++;
                    }
                cout<<num<<endl;
                continue;
            }
            ///
            while(num[i] == num[j]){
                i--;j++;
            }
 
            bool flag = 0, flagger = 0, alessb = 0;
            if (num[i] < num[j]) alessb = 1;
            if(num[mid] == '9' || num[mid - 1] == 9) flagger = 1;
            if(num[i] < num[j]) flag = 1;
               while(i >=0 && j< numsize){
 
                num[j] = num[i];
                j++; i--;
               }
               if(num[mid] != '9' && num[mid - 1] != '9' && flag == 1 ){
               num[mid]++;
                if(numsize%2 == 0)
                    num[mid - 1]++;
 
               }
                if(alessb && flagger){
                    if(numsize%2){
                        i = mid;
                    }
                    else{
                        i = mid - 1;
                    }
                    j  = mid;
                    while(i>=0 && j< numsize){
                        if (num[i] == '9' && num[j] == '9'){
                            num[i] = '0';
                            num[j] = '0';
                            i--; j++;
                        }
                        else{
                            num[i]++;
                            num[j]++;
                            break;    }
                    }
 
                }
 
               cout<<num<<endl;
 
               }
 
    return 0;
}
 