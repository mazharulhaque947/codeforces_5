#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long a[2000],i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0;i<n;i++){cin>>a[i];}
        sort(a,a+n,greater<int>());
        l=0;
        for(i=0;i<k+1;i++){l+=a[i];}
        cout<<l<<"\n";

    }

    return 0;
}
