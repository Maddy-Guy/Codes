#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"\nEnter size of array:";
    cin>>n;
    cout<<"\nEnter elements of array:\n";
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int d;
    cout<<"\nEnter no. of elements you want to rotate:";
    cin>>d;
    int c=0;
    for(int i=d;i<n;i++){
        b[c]=a[i];
        c++;
    }
    for(int i=0;i<d;i++){
        b[c]=a[i];
        c++;
    }
    cout<<"\nRotated array:\n\t\t";
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0;
}
