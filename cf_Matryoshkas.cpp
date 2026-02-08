#include<bits/stdc++.h>
using namespace std;

int f(int a[],int b[],int n,int l,int k,int v)
{
    int i,j,u,o,m,s,p,t;
    vector<int>c;
    s=0;
    p=b[l]-1;
    u=0;

    for(i=l;i<=k;i++)
    {
        m=0; if(a[i]-v>0){m=1;}

        if(p+1!=b[i]){ if(m==1&&u==1){u=0; t=i-1; c.push_back(t);s++; } }

        if(u==0&&m==1){t=i; c.push_back(t); s++;}
        else if(u==1&&m==0){t=i-1; c.push_back(t); s++;}

        if(i==k&&m==1){t=i; c.push_back(t); s++;}
        u=m;
        p=b[i];

    }

   // cout<<"  ppppppppppppppppppppppp =============>>>>>>> "<<s<<"\n";
    //for(i=0;i<s;i++){ cout<<i<<" "<<c[i]<<" "; } cout<<"\n";
    s=s/2;
    p=s;

    for(i=0;i<s;i++){

         p=p+f(a,b,n,c[2*i],c[2*i+1],v+1);

    }


    return p;
}

int main()
{
    int a[200],b[200],c[200],d[400],i,j,k,t,o,p,m,n;
    cin>>t;

    while(t--)
    {

       cin>>n;
       for(i=0;i<n;i++){cin>>c[i];}
       sort(c,c+n);
       m=0;
       p=c[0];
       o=0;

       for(i=0;i<n;i++){
        if(c[i]==p){m++;}
        else{a[o]=m;b[o]=p;o++;  p=c[i]; m=1; }

        if(i==n-1){a[o]=m;b[o]=p;o++;}
       }
     // for(i=0;i<o;i++){cout<<a[i]<<" "<<b[i]<<"\n";}
       k=f(a,b,o,0,o-1,0);
       cout<<k<<"\n";


    }

    return 0;
}
