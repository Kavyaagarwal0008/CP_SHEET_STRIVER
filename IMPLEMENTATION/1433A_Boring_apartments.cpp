#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        string x;
        cin>>x;

        int digit=x[0]-'0';

        int len=(int)x.size();

        int ans=(digit-1)*10 + ( len *(len+1))/2;
        cout<<ans<<endl;


    }
    
    return 0;
}