#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[200],b[200],c[200],d[200],i,j,k,l,m,n,o,p,t,u,v;
    string q,r;

    cin>>t;
    while(t--)
    {
        cin>>n>>r;
        cin>>q;
        k=0;
        if(q[0]=='r'){k=1;}
        else if(q[0]=='y'){ k=2; }
        m=0;
        l=0;
        for(i=0;i<n;i++){
           o=0;
        if(q[i]=='r'){o=1;}
        else if(q[i]=='y'){ o=2; }
         if(k==o){m++;}
         else{ a[l]=m; b[l]=k; k=o; m=1; l++; }
         if(i==n-1){ a[l]=m; b[l]=k; l++; }

        }
        for(i=l-1;i>=0;i--){ if(b[i]==0){ m=i; break; } }
        for(i=0;i<l;i++){ if(b[i]==0){ o=i; break; } }

        k=-1;
        v=0;
        u=1;
        if(r=="y"){ u=2; }
        for(i=0;i<l;i++){

            if( b[(i+1+m)%l]==0 ){  if(v<max(k,0)){v=max(0,k);} k=-1;}
            else{

                if(k==-1&&b[(i+1+m)%l]==u){ k=a[(i+1+m)%l]; }
                else if(k==-1){}
                else{ k=k+a[(i+1+m)%l]; }

            }

        }
        if(r=="g"){ cout<<"0\n"; }
         else{cout<<v<<"\n";}
    }

    return 0;
}
