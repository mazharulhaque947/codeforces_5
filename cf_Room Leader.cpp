#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,k,m,a[100];
    char b[50][21];
    for(i=0;i<50;i++){ a[i]=0; }
    cin>>n;
    m=0;
    for(i=0;i<n;i++){
        cin>>b[i];
        cin>>k;
        a[i]=a[i]+100*k;
        cin>>k;
        a[i]=a[i]-50*k;
        cin>>k;
        a[i]=a[i]+k;
        cin>>k;
        a[i]=a[i]+k;
        cin>>k;
        a[i]=a[i]+k;
        cin>>k;
        a[i]=a[i]+k;
         cin>>k;
        a[i]=a[i]+k;

        if(a[i]>a[m]){m=i;}
    }
    cout<<b[m]<<"\n";

    return 0;
}
