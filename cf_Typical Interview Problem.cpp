#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,o,p,t;
    int a[8]={5,1,5,5,1,5,5,1};
    string q;
    cin>>t;

    while(t--)
    {

        cin>>n;
        cin>>q;

        m=0;

        for(i=0;i<n;i++){ l=1; for(j=0;j<n;j++){ if(a[(j+i)%8]!=q[j]){ l=0; break; } }   if(m==1){break;} }

        if(m==1){ cout<<"YES\n"; }
        else{ cout<<"NO\n"; }
    }

    return 0;
}
