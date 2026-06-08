#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,m,k,n,t;


    cin>>t;

    while(t--)
    {

        cin>>n;

        if(n<=19){  cout<<"YES\n"; k=1; for(i=0;i<n;i++){ cout<<k<<" "; k*=3; } }

        else{  cout<<"NO"; }

        cout<<"\n";
    }

    return 0;
}
