#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[200],i,k,l,j,m,n,o,p,t;
    string s;

    cin>>t;

    while(t--)
    {
        cin>>n;
        cin>>s;

        k=l=m=0;

        for(i=0;i<n;i++)
        {
           if(s[i]==s[k]){ m++; }
           else{ a[l]=m; l++; m=1; k=i; }
            if(i==n-1){  a[l]=m; l++;  }

        }

        m=(l+1)/2;
        m=a[ m ];

        cout<<m<<"\n";

    }

    return 0;
}
