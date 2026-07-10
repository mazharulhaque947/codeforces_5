#include<bits/stdc++.h>
using namespace std;
int gg(int a, int b)
{
    int c;

    while(a!=0)
    {
        c=b%a;
        b=a;
        a=c;


    }


    return b;
}
int main()
{
    int g,t,i,j,k,l,m,n,a[1000];
    cin>>t;

    while(t--)
    {

        cin>>n;
        g=-1;l=0;
        for(i=0;i<n;i++){cin>>a[i]; if(a[i]<a[l]){l=i;}}

        for(i=0;i<n;i++){  if(a[i]!=a[l]){g=i; break;}  }
        if(g==-1){cout<<0<<"\n";}
        else{

            for(i=g,g=a[g]-a[l  ];i<n;i++){  if(a[i]==a[l]){ }else{ g=gg(g,a[i]-a[l]); }  }

            cout<<g<<"\n";
        }

    }

    return 0;
}
