#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[31],b[31],i,j,k,l,m,n;
    cin>>n;

    for(i=0;i<n;i++){

        a[0]=1;
        a[i]=1;
        for(j=1;j<i;j++){a[j]=b[j]+b[j-1]; }

       for(j=0;j<=i;j++){cout<<a[j]<<" ";b[j]=a[j];}
       cout<<"\n";
    }

    return 0;
}
