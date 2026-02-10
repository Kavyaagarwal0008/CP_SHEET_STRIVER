#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        int d=s[i]-'0';
        int invert=9-d;
        if(i==0 && invert==0){
            continue;
        }
        s[i]=char(min(d,invert)+'0');
    }
    cout<<s<<endl;
    return 0;
    
}