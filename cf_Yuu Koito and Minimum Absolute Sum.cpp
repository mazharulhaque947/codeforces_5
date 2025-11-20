#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],i,j,k,l,m,n,t;
    cin>>t;
    while(t--){

        cin>>n;
        m=0;
        for(i=0;i<n;i++){ cin>>a[i];if(a[i]==-1){m++;} }
         l=a[0]-a[n-1];
         if(l<0){ l=l*-1; }
        if(a[0]==-1&&a[n-1]==-1){ a[0]=0; a[n-1]=0; l=0;}
        else if(a[0]==-1&&a[n-1]!=-1){  a[0]=a[n-1];l=0; }
        else if (a[0]!=-1&&a[n-1]==-1){ a[n-1]=a[0]; l=0;}
       // cout<<count(a,a+n,-1)<<"\n";

       cout<<l<<"\n";
        for(i=0;i<n;i++){  if(i>0&&i<n-1&&a[i]==-1){ cout<<"0 ";  } else{ cout<<a[i]<<" ";} }
        cout<<"\n";
    }

    return 0;
}
