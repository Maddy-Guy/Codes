#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cout<<"\nEnter size 1st array:";
    cin>>n;
    cout<<"\nEnter size of 2nd array:";
    cin>>m;
    int a[n],b[m];
    cout<<"\nEnter 1st sorted array:\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"\nEnter 2nd sorted array:\n";
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    vector<int>c,d;
    int i=0,j=0;
    while(i<n&&j<m){
        if(a[i]<b[j])
        {
            c.push_back(a[i]);
            i++;
        }
        else if(a[i]>b[j])
        {
            c.push_back(b[j]);
            j++;
        }
        else {
            c.push_back(b[j]);
            i++;
            j++;
        }
    }
    while(i<n)
    {
    c.push_back(a[i]);
    i++;
    }
    while(j<m){
        c.push_back(b[j]);
        j++;
    }
    int r=0,t=0;
    while(r<n&&t<m){
        if(a[r]<b[t]){
            r++;
        }
        else if(a[r]>b[t])
            t++;
        else {
            d.push_back(a[r]);
            r++;
            t++;
        }
    }
    cout<<"\n Union:\n\t";
    for(int u=0;u<c.size();u++){
        cout<<c[u]<<" ";
    }
    cout<<"\nIntersection:\n\t   ";
    for(int u=0;u<d.size();u++){
        cout<<d[u]<<" ";
    }
    return 0;
}
