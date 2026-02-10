#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],i,j,k,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        k=0;
        m=0;
        for(i=0;i<n;i++){cin>>a[i]; if(a[i]>a[k]){k=i;} if(a[i]!=a[0]){m=1;} }
        if(m==1){ cout<<"YES\n";  for(i=0;i<n;i++){ if(i==k){cout<<"R";} else{ cout<<"B"; } } }
        else{ cout<<"NO"; }
        cout<<"\n";
    }

    return 0;
}
