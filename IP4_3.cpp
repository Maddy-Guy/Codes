#include<iostream>
using namespace std;
int dis(int a[],int n,int x,int y){
    int c=0,d=0,s=0;
    for(int i=0;i<n;i++){
        if(a[i]==x)
            c=i;
        if(a[i]==y)
            d=i;
    }
        s=c-d;
        if(s<0)
            s=abs(s);
    return s;
}
int main(){
    int n;
    cout<<"\nEnter size of array:";
    cin>>n;
    int a[n];
    cout<<"\nEnter array elements:\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x,y;
    cout<<"\nEnter the elements in between you want to find distance:\n";
    cin>>x>>y;
    cout<<"\nMinimum Distance between "<<x<<" and "<<y<<" is "<<dis(a,n,x,y);
    return 0;
}
