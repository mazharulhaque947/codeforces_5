
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,k,l,m,n,o,p,j,u,v,t,mm,oo,pp;
    string a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cin>>a;
        u=v=o=0;
        for(i=0;i<k;i++){ if(a[i]=='0'){ o++; } else if(a[i]=='2'){v++;}  else{ u++; } }
        b[n]='\0';
        for(i=0;i<o;i++){b[i]='-';//cout<<"-";
        }
        for(i=0;i<u;i++){b[n-1-i]='-';//cout<<"-";
        }
        if(n-o-u>=2*v){ for(i=0;i<v;i++){  b[o+i]=b[n-1-u-i]='?'; } for(i=o+v;i<n-(u+v);i++){b[i]='+';} }
         else if(n==k){ for(i=o;i<n-u;i++){b[i]='-';} }
        else{

                mm=2*v-n+o+u;
                oo=mm/2;
                pp=oo;
                for(i=o;i<o+oo;i++){b[i]='-';  ; }
                for(i=o+oo;i<n-(u+pp);i++){b[i]='?';  }
                for(i=n-1-u;i>=n-(u+pp);i--){b[i]='-';}
        }



        for(i=0;i<n;i++){cout<<b[i];}
        cout<<"\n";
    }
    return 0;
}
