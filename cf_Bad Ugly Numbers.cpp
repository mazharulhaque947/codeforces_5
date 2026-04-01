#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,l,t,a[2];
    cin>>t;
    a[0]=3;
    a[1]=5;
    while(t--)
    {
        cin>>n;
        if(n==1){cout<<"-1\n";}
        else{ cout<<"2";for(i=1;i<n;i++){ cout<<3; } cout<<"\n"; }

    }
    return 0;
}
