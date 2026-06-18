#include<bits/stdc++.h>
using namespace std;

int cc(int a[],int n, int p)
{

    int l,k,m,o;

    l=0; k=n-1;

    while(l<=k){

        m=l+k;
        m=m/2;

        if(a[m]<=p){ l=m+1; }
        else if(a[m]>p){k=m-1;}

    }

    return l;
}

int main()
{

    int a[200],b[200],i,j,k,l,s,m,n,t;

    cin>>t;

    while(t--){

        cin>>n>>m>>k;
        for(i=0;i<n;i++){cin>>a[i];}
        for(i=0;i<m;i++){cin>>b[i];}
        sort(a,a+n);
        sort(b,b+m);

        s=0;

       if(n<=m){

          for(i=0;i<n;i++){ if(a[i]>=k){break;} s=s+cc(b,m,k-a[i]); }

       }
        else{

             for(i=0;i<m;i++){ if(b[i]>=k){break;} s=s+cc(a,n,k-b[i]); }

        }
        cout<<s<<"\n";
    }

    return 0;
}
