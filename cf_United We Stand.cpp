#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],i,j,k,l,m,n,o,p,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        k=-1;
        l=0;
        for(i=0;i<n;i++){ cin>>a[i]; if(a[i]>k){l=1; k=a[i];} else if(k==a[i]){l++;} }

        if(l==n){ cout<<-1<<"\n"; }
        else{

            cout<<n-l<<" "<<l<<"\n";
            for(i=0;i<n;i++){ if(a[i]==k){continue;}cout<<a[i]<<" "; } cout<<"\n";
            for(i=0;i<l;i++){ cout<<k<<" "; } cout<<"\n";

        }


    }
    return 0;
}
