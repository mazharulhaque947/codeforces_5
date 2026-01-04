#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,a,x,b,y,i,j,k,l,t;

    cin>>n>>a>>x>>b>>y;
    t=0;
    k=0;
    while(1){

        if(a==b){t=1; break;}

        if(a==x){break;}
        if(b==y){break;}

        a++; if(a==n+1){a=1;}
        b--; if(b==0){b=n;}

        k++;
        if(k>1000){break;}
    }
    (t==1)?cout<<"YES\n":cout<<"NO\n";
    return 0;
}
