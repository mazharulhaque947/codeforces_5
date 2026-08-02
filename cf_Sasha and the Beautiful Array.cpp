#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],i,h,j,l,n,t;

    cin>>t;
    while(t--)
    {
        cin>>n;
        l=h=0;
        for(i=0;i<n;i++){ cin>>a[i]; if(a[i]<a[l]){l=i;} if(a[i]>a[h]){h=i;} }

        cout<<a[h]-a[l]<<"\n";

    }

    return 0;
}
