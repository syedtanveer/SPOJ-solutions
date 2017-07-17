#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--){
        int ng, nm, maxng = -1, maxnm = -1;
        cin>>ng>>nm;
        for(int i = 0; i < ng; i++){
            int a;
            cin>>a;
            maxng = maxng>a?maxng:a;
        }
 
        for(int i = 0; i < nm; i++){
            int a;
            cin>>a;
             maxnm = maxnm>a?maxnm:a;
        }
 
        if(maxng >= maxnm){
            cout<<"Godzilla"<<endl;
        }
        else{
            cout<<"MechaGodzilla"<<endl;
        }
    }
    return 0;
}