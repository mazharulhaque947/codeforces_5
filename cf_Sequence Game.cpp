#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],i,j,k,l,x,t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        k=l=0;
        for(i=0;i<n;i++){ cin>>a[i];if(a[i]>a[k]){k=i;} if(a[i]<a[l]){l=i;} }
        k=a[k];
        l=a[l];

        cin>>x;

        if(l<=x&&x<=k){ cout<<"YES\n"; }
        else{  cout<<"NO\n"; }
    }


    return 0;
}
