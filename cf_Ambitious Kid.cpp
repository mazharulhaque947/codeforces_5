#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],i,j,k,t,n;
    cin>>t;
    while(t--)
    {

        cin>>n;
        k=0;
        for(i=0;i<n;i++){cin>>a[i]; if(a[i]<0){ a[i]=a[i]*-1; }  if(a[i]<a[k]){k=i;}  }

        cout<<a[k]<<'\n';

    }

    return 0;
}
