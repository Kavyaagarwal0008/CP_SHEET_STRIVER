#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int current=0,maxPassenger=0;
    for(int i=1;i<=n;i++){
        int exit,enter;
        cin>>exit>>enter;

        current=current - exit + enter;

        maxPassenger=max(maxPassenger,current);
    }

    cout<<maxPassenger<<endl;


    return 0;
}