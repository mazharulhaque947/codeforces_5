#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[14],i,j,k,b[14],n,m,o;
    n=14;
    for(i=0;i<n;i++){ cin>>a[i]; }
    o=0;
    for(i=0;i<n;i++){

        for(j=0;j<n;j++){ b[j]=a[j];  }
        b[i]=0;
        k=a[i]/14;
        m=a[i]%14;
        for(j=0;j<n;j++){ b[j]=b[j]+k;//cout<<b[j]<<" ";
        }
        for(j=0;j<m;j++){ b[(j+1+i)%14]++; }
        k=0;
        for(j=0;j<n;j++){ //cout<<"..."<<b[j];
         if(b[j]%2==0){ k=k+b[j]; } }
        if(k>o){o=k;}
        // cout<<"\n";
    }
    cout<<o<<"\n";

    return 0;
}
