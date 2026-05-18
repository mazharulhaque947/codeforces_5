#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[4],i,j,k,l,m,n,o,p,t;

    cin>>t;
    while(t--)
    {   o=0;
        for(i=0;i<4;i++){cin>>a[i]; if(a[i]>a[o]){o=i;}  }

        p=0;
        if(o==p){p++;
        }
         for(i=0;i<4;i++){ if(i!=o&&a[i]>a[p]){p=i;}  }

        if(o>p){swap(o,p);}
        if(o+1==p&&o==1){ cout<<"YES\n"; }
        else if(o+1==p){ cout<<"NO\n"; }
        else{ cout<<"YES\n"; }


    }

    return 0;
}
