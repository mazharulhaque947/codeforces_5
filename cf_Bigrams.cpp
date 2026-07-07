#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10],i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {

        cin>>n;
        for(i=0;i<n;i++){cin>>a[i];}
        sort(a,a+n);
        k=0;
        if(a[n-1]>=3){k=1;}
        else if(n>=2&&a[n-2]>=2){k=1;}
        k?cout<<"YES":cout<<"NO";

        cout<<"\n";
    }

    return 0;
}
