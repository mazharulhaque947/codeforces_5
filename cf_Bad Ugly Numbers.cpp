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
        else{ l=1-n%2;  for(i=0;i<n;i++){ cout<<a[ (i+l)%2 ]; } cout<<"\n"; }

    }
    return 0;
}
