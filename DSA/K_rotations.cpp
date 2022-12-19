#include <iostream>

using namespace std;

void reverse(int a[],int i,int j){
        while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }

}


int main()
{
    
    int a[]={1,2,3,4,5,6};
    int n=6;
    int k;
    cin>>k;
    
    k=k%5;
    
    int i=0,j=n-1;
    
    reverse(a,i,j);
    
    i=0; j=k-1;
    
    reverse(a,i,j);
    
    i=k; j=n-1;
    
    reverse(a,i,j);

    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<endl;
    }
    
    
    return 0;
}