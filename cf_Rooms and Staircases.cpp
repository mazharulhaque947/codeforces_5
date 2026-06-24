#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,k,l,m,p,o,t,n,a[100];
    string q;

    cin>>t;

    while(t--)
    {

        cin>>n;
        cin>>q;
        k=0;

        for(i=0;i<n;i++){ if(q[i]=='1'){  k=max(max(k,i+1),n-i); } }

        if(k==0){cout<<n<<"\n";}
        else{cout<<k*2<<"\n";}

    }



    return 0;
}
