#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,m,n,t,a[100];

    cin>>t;
    while(t--)
    {
        cin>>n;
        k=0;
        for(i=0;i<n;i++){cin>>a[i]; if(a[i]==100){k=1;} }

        if(k==1){cout<<"YES\n";}
        else{cout<<"NO\n";}

    }

    return 0;
}
