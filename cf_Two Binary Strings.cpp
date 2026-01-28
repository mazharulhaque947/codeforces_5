#include<bits/stdc++.h>
using namespace std;
void com(int a[],int b[],int s,int l)
{  // cout<<s<<" "<<l<<"\n";
    int k,o,p,i;
    k=a[s];
    p=0;
    for(i=s;i<=l;i++)
    {
        if(a[i]!=k){ b[1+p]=k;  k=1-k; p++; }
        if(i==l){ b[1+p]=k; k=1-k; p++; }
    }
    b[0]=p;
}
int main()
{
    string a,b;
    int c[1000],d[500],p[501],i,j,k,l,m,n,o,q,t;
    cin>>t;
    while(t--){
        cin>>a;
        cin>>b;
        n=a.size();
        l=0;
        q=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==b[i]){d[i]=a[i]-48;k=1;}
            else{d[i]=-1;k=0;}

            if(q!=k){ if(k==0){c[l]=i-1; l++;}else{c[l]=i; l++;} q=k;}

            if(i==n-1){c[l]=i;l++;}
        }

        //for(i=0;i<l;i++){cout<<c[i]<<" ";} cout<<"\n";

        k=l/2;
        j=0;
        for(i=0;i<k;i++)
        {   com(d,p,c[2*i],c[2*i+1]);
           // for(q=1;q<=p[0];q++){ cout<<p[q]<<" "; } cout<<"\n";
            if( p[0]>2|| (p[0]==2&&p[1]==0) ){j=1; break;}
        }
        if(j==1){cout<<"YES\n";}
        else{cout<<"NO\n"; }

    }
    return 0;
}
