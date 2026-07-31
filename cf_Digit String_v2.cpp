#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[300],c[300],d[300],i,j,k,l,m,n,o,p,t,x,y,z,s;
    string q;

    cin>>t;

    while(t--)
    {


        cin>>q;
        n=q.size();
        z=0;
        l=0;
        o=0;
        m=0;
        for(i=0;i<n;i++){ if(q[i]=='2'){p=1;}else{p=0;}
                          if(q[i]=='4'){z++;}
                          else if( p==o ){ m++;  o=p; }
                          else{ a[l]=m; m=1; l++; o=p; } if(i==n-1){ a[l]=m;l++;   }
                        }

       // for(i=0;i<l;i++){ cout<<a[i]<<" "; } cout<<"\n";
        x=0;if(a[0]==0){x=1;}



       if(o==0){ if((l-x+1)%2==1){x++;}l--; }else{  if( (l-x+1)%2==0){x++;} }



        m=0;
        if(l-x+1>1){ m=1000 ;
                s=0;
            for(i=x+1;i<l;i+=2){s+=a[i];}
                   y=0;
        // cout<<x<<" c "<<l<<"\n";
        for(i=x;i<l;i+=2){ if( s+y <m){m=s+y;} if(i+1<l){s-=a[i+1];}y+=a[i];  }
        s=0;
        for(i=l-1;i>=x;i-=2){ if( s+y <m){m=s+y;} y-=a[i-1]; y+=a[i];  }

        }

        cout<<z+m<<"\n";
    }

    return 0;
}
