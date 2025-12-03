#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[2],i,j,k,l,m,n,t;
    string b;
    cin>>t;
    while(t--)
    {

        cin>>b;
        n=b.size();
        a[0]=0;
        a[1]=0;
        k=0;
        for(i=0;i<n;i++){


            if(b[i]=='='||b[i]=='<'||b[i]=='>'){ k=1; continue; }
            a[k]=a[k]*10+(b[i]-48);
        }
        cout<<a[0];
        if(a[1]==a[0]){ cout<<"="; }
        else if(a[1]<a[0]){ cout<<">"; }
        else{ cout<<"<"; }
        cout<<a[1]<<"\n";

    }

    return 0;
}
