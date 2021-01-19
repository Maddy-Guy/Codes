#include<iostream>
using namespace std;
int main()
{
    int c;
    char ch;
    int s=0,i=1;
    do{
            int b;
            cout<<"\nEnter data stream value for "<<i<<" element:";
        cin>>b;
        if(i==1)
            s=s+b;
        else
            s=(s+b)/2;
    cout<<"\t\t\tMedian for "<<i<<" elements:"<<s;
    cout<<"\n\n Do you want to enter more element(y/n):";
    i++;
    cin>>ch;
    }while(ch=='Y'||ch=='y');
    return 0;
}
