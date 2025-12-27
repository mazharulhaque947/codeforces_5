#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,n,m,t;
    string a;
    cin>>t;

    while(t--)
    {

        cin>>a;
        n=a.length();
        k=1;
        if(a[0]=='B'||a[n-1]=='A'){k=0;}
        for(i=1;i<n;i++){ if(a[i]==a[i-1]&&a[i]=='B'){k=0;} }

        if(k==1){ cout<<"YES\n"; }
        else{ cout<<"NO\n";  }

    }

    return 0;
}
