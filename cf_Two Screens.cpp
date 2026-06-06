#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,k,j,l,m,n,o,p,t;
    string q,w;

    cin>>t;

    while(t--)
    {
        cin>>q;
        cin>>w;
        n=q.size();
        m=w.size();

        o=0;
        for(i=0;i<min(n,m);i++){ if(q[i]==w[i]){o++;}else{break;} }

         if(o==0){}
         else{o=o-1; }

         cout<<n+m-o<<"\n";

    }

    return 0;
}
