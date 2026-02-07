#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,k,l,m,n,o,p,x,y;
    cin>>t;
    while(t--)
    {
        k=l=o=p=0;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>x>>y;
            if(x>0){k=1;}
            if(x<0){l=1;}
            if(y>0){o=1;}
            if(y<0){p=1;}
        }
        if(k+l+o+p<4){cout<<"YES\n";}
        else{cout<<"NO\n";}
    }
    return 0;
}
