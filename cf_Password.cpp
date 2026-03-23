#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10],n,i,j,k,t;
    cin>>t;
    while(t--)
    {

        cin>>n;
        for(i=0;i<n;i++){cin>>a[i];}
        n=9-n+1;
        cout<<((n*(n-1))*3)<<"\n";

    }


    return 0;
}
