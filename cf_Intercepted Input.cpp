#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],c[100],d[100],i,j,k,l,m,n,t,o,p,u,v,q;
    cin>>t;
    while(t--){
        k=200;
        for(i=0;i<k;i++){c[i]=0;}
        cin>>n;
        for(i=0;i<n;i++){ cin>>a[i]; c[a[i]-1]++; }
        l=0;
        m=sqrt(n-2);
        for(i=1;i<=m;i++){

            if( (n-2)%i==0  ){ d[2*l]=i; d[2*l+1]=(n-2)/i;l++;}
        }
        m=l;
        for(i=0;i<l;i++){ if( d[2*i]==d[2*i+1] ){if( c[d[2*i]-1]>=2 ){ l=i; break; }}
        else{ if( c[d[2*i]-1]>0&&c[d[2*i+1]-1]>0 ){ l=i; break; }  } }

        if(l==2*m){ cout<<"-1\n"; }
        else{
            o=d[l*2];
            p=d[2*l+1];
            cout<<o<<" "<<p<<"\n";
            // if you want the possible matrix
            /*
            u=o;
            v=p;
            q=0;
            for(i=0;i<o;i++){

                for(j=0;j<p;j++)
                {
                    while(1){

                    if( a[ q ]==u){ u=-1; }
                    else if( a[q]==v){ v=-1; }
                    else{ cout<<a[q]<<" "; q++; break;}
                    q++;
                    }
                }

                cout<<"\n";
            }
            */
        }

    }

    return 0;
}
