#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],i,j,k,n,t;
    cin>>t;
    while(t--)
    {

        cin>>n;
        k=0;
        for(i=0;i<n;i++){cin>>a[i]; if(a[i]>a[k]){ k=i; } }
        cout<<a[k]<<"\n";

    }

    return 0;
}
