#include<bits/stdc++.h>
using namespace std;

int main(){

    int k,n,w;
    // cout<<"enter k n w "
    /*
    k= cost of first banana
    n=total money
    w=total banana he want
    */
    cin>>k>>n>>w;;
    int total_banana_cost=0;
    for(int i=1;i<=w;i++){
        total_banana_cost=total_banana_cost+( i* k);
    }
    
    int borrow_money= total_banana_cost- n;
    if(borrow_money<0){
        borrow_money=0;
    }

    cout<<borrow_money<<endl;

    return 0;
}