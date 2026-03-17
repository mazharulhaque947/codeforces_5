#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[200],b[200],i,j,k,l,m,n,r,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        r=0;
        m=0;
        for(i=0;i<n;i++)
        {

            cin>>a[i]; m=m+a[i];
            for(j=0;j<=i;j++){ if(a[j]*2==m){r++;} }

        }

        cout<<r<<"\n";
    }

    return 0;
}
