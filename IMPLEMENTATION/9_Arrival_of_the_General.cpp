#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int minval=101,maxval=-1;
    int minidx,maxidx=0;

    for(int i=0;i<n;i++){
        if(arr[i]>maxval){
            maxval=arr[i];
            maxidx=i;
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]<=minval){
            minval=arr[i];
            minidx=i;
        }
    }

    int swaps=maxidx+(n-1-minidx);

    if(maxidx>minidx){
        swaps--;
    }

    cout<<swaps<<endl;
    return 0;

}