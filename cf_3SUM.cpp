#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],b[10],i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        for(i=0;i<10;i++){ b[i]=0; }

        cin>>n;

        for(i=0;i<n;i++){ cin>>a[i];  b[ a[i]%10 ]++; }




    }


    return 0;
}
