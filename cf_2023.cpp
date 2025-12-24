#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){

    int i,j,k,l,m,n,a[100],t;
    cin>>t;
    while(t--)
    {
       cin>>n>>k;
       m=1;
       for(i=0;i<n;i++){ cin>>a[i]; m=m*a[i]; }
       l=2023/m;
       //cout<<l<<"<< \n ";
       if(2023!=l*m){ cout<<"NO\n"; }
       else{

         if(k<=0){ cout<<"NO\n"; }
         else{
            cout<<"YES\n"<<l<<" ";
            for(i=0;i<k-1;i++){ cout<<"1 ";}
            cout<<"\n";

         }

       }



    }

    return 0;
}
