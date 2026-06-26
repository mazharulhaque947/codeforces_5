#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[500],i,j,k,m,n,t;
    string q,w;

    cin>>t;

    while(t--)
    {
        //cin>>n;
        cin>>q;
        cin>>w;
        n=w.size();
        for(i=0;i<n;i++){


            for(j=0;j<26;j++){ if(w[i]==q[j]){ a[i]=j ; break; } }

        }
        m=0;
        for(i=1;i<n;i++){k=a[i]-a[i-1]; if(k<0){k*=-1; } m+=k;}

        cout<<m<<"\n";
    }


    return 0;
}
