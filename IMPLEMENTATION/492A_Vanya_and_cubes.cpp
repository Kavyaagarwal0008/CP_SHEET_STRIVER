#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int level=0;
    int used=0;
    
    for(int k=1; ;k++){
        int need=k*(k+1)/2;

        if(used+need> n){
            break;

        }
        used=used+need;
        level++;
    }

    cout<<level<<endl;
    return 0;
}