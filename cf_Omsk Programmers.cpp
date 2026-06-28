#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[200],b[200],i,j,k,m,n,l,v,o,p,t;

    cin>>t;

    while(t--)
    {

        cin>>n>>k>>o;
        l=m=0;
        a[l]=n;
        b[m]=k;
        l++;
        m++;
        while(true){ n/=o; a[l]=n; l++; if(n==0){break;}  }
        while(true){ k/=o; b[m]=k; m++; if(k==0){break;}  }

        p=10000;

        for(i=0;i<l;i++){

            for(j=0;j<m;j++)
            {
              v=a[i]-b[j]; if(v<0){v*=-1;} if(i+j+v<p){p=i+j+v;}
            }

        }
        cout<<p<<"\n";
    }

    return 0;
}
