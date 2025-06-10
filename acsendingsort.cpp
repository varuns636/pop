#include<iostream>
using namespace std;

    int main()
    {
    int a[20],n;
    int i,j,p;
    cout<<"Enter the size of an array";
    cin>>n;
    cout<<"Enter the numbers ";
    for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(a[i]>a[j]){
                p=a[i];
                a[i]=a[j];
                a[j]=p;
            }
        }
    }
    cout<<"The ascending order is=";
    for(i=0;i<n;i++){
        cout<<" ";
        cout<<a[i];
    }
    return 0;
    }