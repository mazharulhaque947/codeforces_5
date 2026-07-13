
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,y,t,m,n,a[200];

    cin>>t;

    while(t--)
    {

        cin>>n>>k;
        y=0;
        for(i=0;i<n;i++){cin>>a[i]; y+=a[i];}

        if(y%2==1|| (n*k)%2==0 ){ cout<<"YES\n"; }
        else{ cout<<"NO\n";   }
    }

    return 0;
}
