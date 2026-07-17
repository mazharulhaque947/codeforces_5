#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[200][2],i,j,k,l,m,n,o,p,t,b[200],c[200];

    cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){ a[i][0]=0; a[i][1]=0; }
        o=p=0;
        for(i=0;i<n;i++){ cin>>b[i]; if(b[i]==-1){o=1;}  if(b[i]==1){p=1;} a[i][0]=o; a[i][1]=p; }
        cin>>c[0];
        k=1;
        if(c[0]!=b[0]){k=0;}
        for(i=1;i<n;i++){  cin>>c[i]; if(c[i]>b[i]){ if(a[i-1][1]==0){k=0;} } if(c[i]<b[i]){  if(a[i-1][0]==0){k=0;} } }
        if(k==1){cout<<"YES\n";}
        else{cout<<"NO\n";}

    }

    return 0;
}
