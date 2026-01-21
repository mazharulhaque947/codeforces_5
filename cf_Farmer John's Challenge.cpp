#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,k,t;
    cin>>t;
    while(t--){
    cin>>n>>k;
    if(n==k){ for(i=0;i<n;i++){cout<<"1 ";} }
    else if(k==1){ for(i=0;i<n;i++){cout<<i+1<<" ";}  }
    else{cout<<"-1";}
    cout<<"\n";
    }
    return 0;
}
