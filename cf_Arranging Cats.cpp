#include<bits/stdc++.h>
using namespace std;

int main()
{
    string q,w;
    int i,j,k,l,m,n,t;

    cin>>t;

    while(t--)
    {

        cin>>n;

        cin>>q;
        cin>>w;

        k=m=l=0;
        for(i=0;i<n;i++){ if(q[i]=='1'&&w[i]=='1'){m++;} if(q[i]=='1'){k++;}   if(w[i]=='1'){l++;}  }
       k=k-l;
       if(k<0){k*=-1;}
       cout<<k+l-m<<"\n";

    }

    return 0;
}
