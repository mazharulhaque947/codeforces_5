#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,r,a[100],b[100],i,j,k,m,n,t,u,v;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        l=r=0;
        if(s[n-1]=='0'){r=1;}
        if(s[0]=='0'){l=1;}
        k=0;
        u=0;
        v=0;
        for(i=0;i<n;i++){

            if(s[k]==s[i]){u++;}
            else{k=i;a[v]=u; v++; u=1;}
            if(i==n-1){k=i;a[v]=u; v++; u=1;}

        }
        m=0;
        i=0;
        u=0;

        if(l!=1){i++;}
        for(;i<v;i+=2){
            u=u+a[i];
            b[m]=a[i];
            m++;
        }
        u=n-u;
        k=0;
        if(v==1){
            if(l==1){
            if(n>3){ k=2+(n-4)/3; }
            else { k=1; }
            }
            k=k+u;
        }
        else{

           if(l==1){ if(b[0]>3){ k=k+2+(b[0]-4)/3; }
            else if(b[0]>=2){ k=k+1; }  }

            if(k==1){ if(b[m-1]>3){ k=k+2+(b[m-1]-4)/3; }
            else if(b[m-1]>=2){ k=k+1; }  }

            for(i=l;i<m-r;i++){  k=k+(b[i])/3; }
            k=k+u;
        }
        cout<<k<<"\n";

    }

    return 0;
}
