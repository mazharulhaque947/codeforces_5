#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],i,n,s,j,k,l,m,b[100],t;
    cin>>t;
    while(t--)
    {

        cin>>n>>k;


        for(i=0;i<n;i++){ cin>>a[i]; }
        for(i=0;i<n;i++){ cin>>b[i]; }
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        s=0;
        for(i=0;i<k;i++){ s=s+max(a[i],b[i]); }
        for(;i<n;i++){s=s+a[i];}
        cout<<s<<"\n";

    }

    return 0;
}
