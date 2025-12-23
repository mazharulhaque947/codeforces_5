#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,m,k,l,n,j,a,b,c;

    cin>>t;

    while(t--)
    {

        cin>>a>>b>>c;

        k=max(a,b)-min(a,b);
        m=k;
        k=k*2;

        if(k<max(max(a,b),c)){ cout<<"-1\n"; }
        else if(m>=c){ cout<<c+m<<"\n";  }
        else{ cout<<c-m<<"\n";  }
    }

    return 0;
}
