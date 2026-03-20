
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j,i,k,l,m,n;

    cin>>t;
    while(t--)
    {
        cin>>n>>k>>l;




       if(n==k&&l==n){ cout<<"YES\n"; }
       else if(k+l+1<n){cout<<"YES\n";}
        else{ cout<<"NO\n"; }

    }

    return 0;
}

