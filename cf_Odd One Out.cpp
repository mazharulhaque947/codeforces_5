
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],i,k,m,n,t;
    cin>>t;
    while(t--)
    {

        //cin>>n;
        n=3;
        k=0;
        for(i=0;i<n;i++){cin>>a[i];k^=a[i];}

       cout<<k<<"\n";

    }
    return 0;
}
