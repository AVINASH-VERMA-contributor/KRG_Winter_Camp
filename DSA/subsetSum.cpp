#include<bits/stdc++.h>
using namespace std;

void subsetSum(vector<int> a,int target,int count,int sum){
    
    if(a.size()==0){
        cout<<sum<<endl;
        return;
    }

    if(sum==target){
        cout<<"found"<<endl;
        count++;
    }
    
    int element=a[a.size()-1];
    a.pop_back();
    subsetSum(a,target,count,sum+element);
    subsetSum(a,target,count,sum);
}

int main(){
    vector<int> a={1,2,3};

    subsetSum(a,5,0,0);
}