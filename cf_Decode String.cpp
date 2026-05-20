#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],i,j,k,l,m,n,o,p,t;
    string q;
    cin>>t;

    while(t--)
    {
        cin>>n;
        cin>>q;

        l=0;
        o=0;
        for(i=0;i<n;i++){

           a[l]=q[i]-48;
           l++;
           if(q[i]=='0'&&q[i-1]!='1'&&q[i-1]!='2'){ o=10*a[l-3]+a[l-2]; a[l-3]=o; l=l-2; }

        }

        for(i=0;i<l;i++){ cout<<(char)(a[i]+96)<<" "; }

        cout<<"\n";


    }

    return 0;
}
