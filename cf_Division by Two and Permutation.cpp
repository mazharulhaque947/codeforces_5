#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a[50][12],i,j,k,l,m,n,t,b[50],c[50];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){ cin>>m; a[i][0]=m; l=0; while(m>=1){ a[i][l+2]=m; m=m/2;  l++; } a[i][1]=l; }
         //for(i=0;i<n;i++){ for(j=0;j<a[i][1];j++){ cout<<a[i][j+2]<<" "; } cout<<"\n"; }
        k=0;

        for(i=0;i<n;i++){ c[i]=0; }

        while(c[0]!=a[0][1]){

            for(i=0;i<n;i++){ b[i]=0; }

            for(i=0;i<n;i++){ //cout<<c[i]<<" ";
            b[a[i][2+c[i]]-1]++; } //cout<<"\n";
            m=1;
            for(i=0;i<n;i++){if(b[i]==0){ m=0; }}
           if(m==1){k=1; break;}
           c[n-1]++;
           for(i=n-2;i>=0;i--){ if(c[i+1]>=a[i+1][1]){ c[i+1]=0; c[i]++; } }

        }

        if(k==1){cout<<"YES\n";}
        else{ cout<<"NO\n"; }



    }

    return 0;
}
