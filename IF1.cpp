#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> a;
int n;
cout<<"\n Enter size of array:";
cin>>n;
for(int i=0;i<n;i++){
    int b;
    cin>>b;
    a.push_back(b);
}
int min1=INT_MAX;
for(int i=0;i<n;i++){
    if(min1>a[i])
        min1=a[i];
}
int min2=INT_MAX;
for(int i=0;i<n;i++){
    if(min2>a[i]&&a[i]==min1)
    continue;
    else if(min2>a[i])
        min2=a[i];
}
cout<<"\n The smallest element is "<<min1<<"and \n Second smallest element is "<<min2<<endl;
return 0;
}
