#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,j,k,i,o,p,t;

    cin>>t;

    while(t--)
    {
        cin>>n>>m;


    if(n<=m/2){ cout<<m/2<<" "<<m-m%2<<"\n";  }
    else{cout<<-1<<" "<<-1<<"\n";  }

    }

    return 0;
}

