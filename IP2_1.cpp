#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int b;
        cin>>b;
        a.push_back(b);
    }
    int j;
    for(int i=0;i<n;i++){
        int maxi=a[i];
        for(j=i+1;j<n;j++){
            if(a[i]>=a[j])
                continue;
            else if(a[i]<a[j])
                break;
        }
        if(j==n)
            cout<<a[i]<<" ";
    }
    return 0;
}
