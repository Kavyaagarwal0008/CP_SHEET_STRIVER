#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b;
    cin>>a>>b;

    //a limak 
    //b bob
    int cnt=0;
    while(a<=b){
        a=3*a;
        b=2*b;
        cnt++;
        
    }

    cout<<cnt<<endl;
    return 0;
}