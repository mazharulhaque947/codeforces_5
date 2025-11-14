#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],j,k,i,l,m,t,n;
    cin>>t;
    while(t--)
    {

        cin>>n;

        for(i=0;i<n;i++){  cin>>a[i]; }
        m=0;

        for(i=0;i<n;i++){ m++; if(a[i]==m){m++; } }

        cout<<m<<"\n";
    }

    return 0;
}
