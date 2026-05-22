#include<bits/stdc++.h>
using namespace std;

int main()
{
    string q;

    int i,k,l,m,n,j,o,p,t;

    cin>>t;

    while(t--)
    {
        cin>>n;
        cin>>q;
        l=k=0;
        for(i=1;i<n;i++){ if(q[i]=='F'&&q[i-1]=='S'){k++;}else if(q[i]=='S'&&q[i-1]=='F'){l++;} }

        if(k>l){ cout<<"YES\n"; }
        else{ cout<<"NO\n"; }
    }

    return 0;
}
