#include<bits/stdc++.h>
using namespace std;

int main()
{
    string q,w;
    int a[100],b[100],i,j,k,l,t,o,p,n,m;
    cin>>t;

    while(t--)
    {

        cin>>n>>m;
        cin>>q;
        cin>>w;
        o=p=0;
        for(i=0;i<n;i++){ if(q[i]=='0'){o++;}else{p++;}a[i]=o; b[i]=p;  }
        if(m>n){ cout<<"NO\n"; }
        else{

            o=1;
            for(i=0;i<m-1;i++){ if(q[n-1-i]!=w[m-1-i]){ o=0; break; } }

            if(w[0]=='1'){ if(b[n-m-1]<=0){ o=0; } }
            else{ if(a[n-m-1]<=0){ o=0; } }

            if(o==1){cout<<"YES\n";}
            else{ cout<<"NO\n"; }

        }

    }


    return 0;
}
