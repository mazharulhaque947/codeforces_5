#include<bits/stdc++.h>
using namespace std;

int cc(int n){
int i,j,m,l;
l=0;
while(n>0){

    if(n%2==0){l++; }
    else{ break; }
    n/=2;
}
return l;
}

int main()
{
    int a[100],b[100],c[100],i,j,k,m,n,l,t;
    m=100;
    for(i=1;i<=m;i++){ a[i-1]=cc(i); }

   // for(i=1;i<=m;i++){ cout<<i<<" "<<a[i-1]<<"\n";}
    cin>>t;
    while(t--){
        cin>>n;
        k=0;
        l=0;
        for(i=0;i<n;i++){  cin>>c[i]; if(c[i]<=m){k=k+a[c[i]-1];}else{ k=k+cc(c[i]); } }

        k=n-k;
       // cout<<k<<"\n";
        if(k<=0){ cout<<"0\n"; }
        else{
            for(i=0;i<n;i++){ b[i]=a[i]; }
            sort(b,b+n);

            for(i=n-1;i>=0;i--){ if(k>0){ k=k-b[i]; l++; }else{ break;} }
            if(k<=0){
            cout<<l<<"\n";
            }
            else{cout<<"-1\n";   }
        }

    }

    return 0;
}
