#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[200],c[200],i,j,k,l,m,n,o,p,t;
    string q;

    cin>>t;

    while(t--)

    {
        cin>>n>>k;
        cin>>q;
        for(i=0;i<k;i++){a[i]=c[i]=0;}

        for(i=0;i<n;i++){if(q[i]=='1'){ a[i%k]++; if(i<n-k){c[i%k]=1;} } }
        l=1;
         for(i=0;i<k;i++){ if(a[i]%2==0){}else{l=0; break;} }

        if(l){cout<<"YES\n";}
        else{cout<<"NO\n";}
    }

    return 0;
}
