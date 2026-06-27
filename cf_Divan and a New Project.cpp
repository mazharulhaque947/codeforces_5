#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k,l,j,i,o,p,t,x[201];

    cin>>t;

    while(t--)
    {
        cin>>n;
          vector<pair<int,int>>a(n,{1,0});
        m=o=0;
        for(i=0;i<n;i++){cin>>k;a[i].first=k;a[i].second=i+1;}
        sort(a.begin(),a.end());
        //for(auto u:a){ cout<<u.first<<" "<<u.second<<"\n"; }
        for(i=0;i<n;i++){m=i/2;m++;o+=2*a[n-1-i].first*m;}
        x[0]=(n+1)/2;
        l=k=x[0]; k++;

        l--;

         for(i=0;i<n;i++){ if(i%2==0){x[a[n-1-i].second]=k;k++;}else{x[a[n-1-i].second]=l;l--;  }  }
        cout<<o<<"\n";
        for(i=0;i<=n;i++){cout<<x[i]<<" ";} cout<<"\n";
    }

    return 0;
}
