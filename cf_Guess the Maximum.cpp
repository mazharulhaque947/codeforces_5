#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a[4000],i,j,k,l,m,n,o,t,p;


    cin>>t;

    while(t--)
    {   o=1000000000;
        cin>>n;
        p=1000000000;
        for(i=0;i<n;i++){ cin>>a[i]; if(i!=0){ p=a[i]; if(p<a[i-1]){p=a[i-1]; } p--; //cout<<p<<"\n";

         if(p<o){o=p;} } }
        cout<<o<<"\n";

    }

    return 0;
}
