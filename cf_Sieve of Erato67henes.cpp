#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5],i,j,k,n,t;
    cin>>t;
    while(t--){
        cin>>n;
        k=j=0;
        for(i=0;i<n;i++){cin>>a[i]; if(a[i]==67){j=1;} if(a[i]==1){k=1;}}
        if(j>=1){cout<<"YES\n";}
        else{cout<<"NO\n";}

    }

    return 0;
}
