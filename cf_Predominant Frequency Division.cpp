#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[200],o[200],p[200],q[200],i,j,k,l,m,n,t,x,y,z;

    cin>>t;
    while(t--)
    {

        cin>>n;
        x=y=z=0;
        for(i=0;i<n;i++){cin>>a[i]; if(a[i]==1){x++;}else if(a[i]==2){y++;}else{z++;} o[i]=x;p[i]=y;q[i]=z;  }

        k=0;

        for(i=0;i<n-2;i++){

            for(j=i+1;j<n-1;j++){   if( o[i]>=p[i]+q[i] &&  o[j]-o[i]+p[j]-p[i]>=q[j]-q[i] ){k=1; break;}  }
            if(k==1){break;}
        }

        if(k==1){cout<<"YES\n";}
        else{ cout<<"NO\n"; }

    }

    return 0;
}
