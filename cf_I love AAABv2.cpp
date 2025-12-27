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
        m=0;
        if(n<=1){k=0;}
        for(i=0;i<n;i++){ if(a[i]=='A'){m++;} else{m--; } if(m<0){k=0;}}

        if(k==1){ cout<<"YES\n"; }
        else{ cout<<"NO\n";  }

    }

    return 0;
}

