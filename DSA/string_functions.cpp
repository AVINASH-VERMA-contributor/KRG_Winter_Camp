#include <bits/stdc++.h>

using namespace std;

void sort_Arr(char arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
            char temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }   
        }
    }
}

string str_conct(string a,string b){
    return a+b;
}

string str_n_conct(string a,string b){
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        a+=b[i];
    }
    return a;
    
}

string str_cpy(string a,string b){
    a=b;
    return a;
}

string str_n_cpy(string a,string b){
    int n;
    cin>>n;
    
    a="";
    
    for(int i=0;i<n;i++){
        a+=b[i];    
    }
    return a;    
}


string str_n_repl(string a,string b){
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        a[i]=b[i];
    }
    return a;
}

int main()
{
    string a="ajay";
    string b="vijay";
    
    // cout<<str_cpy(a,b);
    // cout<<str_n_cpy(a,b);
    // cout<<str_conct(a,b);
    // cout<<str_n_conct(a,b);
    
    // cout<<str_n_repl(a,b);
    
    char arr[]={'M','H','P','A','D','Z','T','G'};
    
    
    int n=sizeof(arr)/sizeof(arr[0]);
    
    sort_Arr(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}