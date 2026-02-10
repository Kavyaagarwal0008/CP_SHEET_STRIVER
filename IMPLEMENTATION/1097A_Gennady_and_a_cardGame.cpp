#include<bits/stdc++.h>
using namespace std;

int main(){

    
    string table;
    cin>>table;

    bool ok=false;
    for(int i=0;i<5;i++){

        string card;
        cin>>card;

        if(card[0]==table[0] || card[1]==table[1]){
            ok=true;

        }
    }
    if(ok){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}