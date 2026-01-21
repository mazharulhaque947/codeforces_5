#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,k,t;
    cin>>t;
    while(t--){
    cin>>n>>k;
    if(k==1||n==k){ for(i=0;i<n;i++){cout<<"1 ";} }
    else{cout<<"-1";}
    cout<<"\n";
    }
    return 0;
}
