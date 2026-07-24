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

         k=-1;

            for(j=0;j<n-2;j++){   if( o[j]>=p[j]+q[j] ){k=j; break;}  }
        m=0;
        m=j;

        if(k!=-1){

            for(j=k+1;j<n-1;j++){ if(  o[j]-o[m]+p[j]-p[m]>=q[j] -q[m] ){  k=5e7; break; }  }
        }




        if(k==5e7){cout<<"YES\n";}
        else{ cout<<"NO\n"; }

    }

    return 0;
}
