#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"\nEnter size of array:";
    cin>>n;
    int a[n];
    cout<<"\nEnter array elements:\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<endl;
 int i=0,j=1;
 while(i<n){
    if(a[i]==a[j])
    {
     cout<<a[i]<<" ";
     j=n;
    }
    j++;
    if(j>=n){
        i++;
        j=i+1;
    }
 }
 return 0;
}
