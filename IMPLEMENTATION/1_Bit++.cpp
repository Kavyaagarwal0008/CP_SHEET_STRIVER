#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=0;
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;

        if(s.find("++") != string::npos){
            x++;
        }
        else{
            x--;
        }
    }
    cout<<x<<endl;
    return 0;

}

// TC- O(n) sc - O(1)