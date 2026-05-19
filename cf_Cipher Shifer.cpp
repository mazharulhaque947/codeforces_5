#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t;
    string a;

    cin>>t;

    while(t--)
    {
        cin>>n;
        cin>>a;

        m=0;

        for(i=1;i<n;i++){  if(a[i]==a[m]){ cout<<a[m]<<""; m=i+1; i++;} }
        cout<<"\n";

    }

    return 0;
}
