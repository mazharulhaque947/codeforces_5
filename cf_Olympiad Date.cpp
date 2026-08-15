#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10],i,j,k,l,m,n,b[20],t;

    cin>>t;
    while(t--){

        for(i=0;i<10;i++){ a[i]=0; }
        cin>>n;
        for(i=0;i<n;i++){ cin>>b[i];  }
         k=0;
         for(i=0;i<n;i++){ a[b[i]]++;  //  for(j=0;j<10;j++){ cout<<a[j]<<" "; } cout<<"\n";
         if(a[0]>=3&&a[1]>=1&&a[2]>=2&&a[5]>=1&&a[3]>=1){k=i+1; break;} }

         cout<<k<<"\n";
    }


    return 0;
}
