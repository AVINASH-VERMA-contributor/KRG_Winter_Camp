#include<bits/stdc++.h>
using namespace std;

bool ifSorted(int arr[],int len){
    for(int i=0;i<len-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int arr[]={10,10,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<ifSorted(arr,n);
}