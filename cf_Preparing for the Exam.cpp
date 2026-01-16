#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int i,j,k,l,m,n,s,t,a[100],q[100];
    cin>>t;

    while(t--)
    {

        cin>>n>>m>>k;
        s=0;
        for(i=0;i<m;i++){cin>>a[i];}
        for(i=0;i<k;i++){cin>>q[i];s+=q[i];}
        l=(n*(n+1))/2;
        for(i=0;i<m;i++){
            if(k==n){cout<<"1";}
            else if(k<n-1){cout<<"0";}
            else if(l-s==a[i]){cout<<"1";}
            else{cout<<"0";}
        }
       cout<<"\n";
    }

    return 0;
}
