#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],j,i,k,l,m,n,o,p,t;
    cin>>t;

    while(t--){

        cin>>n>>m>>k;
        for(i=0;i<n;i++){cin>>a[i];}
        m=a[m-1];
        sort(a,a+n, greater<int>());

        if(k==n){ cout<<"YES\n"; }
        else{

           if(a[k]==m&&a[k-1]==m){ cout<<"MAYBE\n"; }
           else if(a[k]<m){  cout<<"YES\n"; }
           else{  cout<<"NO\n"; }

        }
    }

    return 0;
}
