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
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    int e=0,w=n-1;
    int m=a[e]+a[w],x=e,y=w,s=0;
    while(e<w){
        s=a[e]+a[w];
        if(abs(s)<abs(m)){
            m=s;
            x=e;
            y=w;
        }

        if(s<0)
            e++;
        else w--;
    }
    cout<<"\nThe two elements whose sum is closest to zero are "<<a[x]<<" and "<<a[y]<<".";
    return 0;
}
