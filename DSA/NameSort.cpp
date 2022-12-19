#include<bits/stdc++.h>
using namespace std;

void countSort(int arr[],int n,int len){
    int freq[n+1]={0};


    for(int i=0;i<len;i++){
        freq[arr[i]]++;
    }

int temp=0;

    for(int i=0;i<n+1;i++){
        for(int j=0;j<freq[i];j++){
            arr[temp++]=i;
        }
    }
    

}


int main(){
    int arr[]={2,1,3,2,4,3,1,2};

    int len=sizeof(arr)/sizeof(arr[0]);

    countSort(arr,5,len);
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}