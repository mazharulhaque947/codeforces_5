#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,t;
    string a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>a;
        if(n<=2&&a[0]==a[n-1]){cout<<"NO\n";}
        else{cout<<"YES\n"; }

    }

    return 0;
}
