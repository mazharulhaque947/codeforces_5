#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,k,l,m,n,t,a,b;

    cin>>t;
    while(t--)
    {

        cin>>n>>a>>b;

        if(a<=b){ if(n%2==b%2){ cout<<"YES\n"; } else{ cout<<"NO\n";  } }
        else{ if(n%2==b%2&&b%2==a%2){ cout<<"YES\n"; } else{ cout<<"NO\n";  }  }


    }

    return 0;
}
