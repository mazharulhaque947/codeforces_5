#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,i,j,k,l,m,n,t;

    cin>>t;

    while(t--)
    {

        cin>>m>>n;

        if(n%2==0&&m%2==0){ cout<<"YES\n"; }
        else if(n%2==1&&m>=2&&m%2==0){ cout<<"YES\n";  }

        else{ cout<<"NO\n";  }

    }


    return 0;
}
