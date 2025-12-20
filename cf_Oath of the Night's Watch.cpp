#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],i,j,k,l,m,n,t;
    cin>>n;

    k=l=0;
    t=1;
   // cin>>n;
    for(i=0;i<n;i++){   cin>>a[i]; if(a[i]<a[k]){ k=i; } if(a[i]>a[l]){ l=i; } if(a[i]!=a[0]){ t=0; }  }
   // cout<<k<<" "<<l<<'\n';
    if(t==1){  cout<<0<<"\n";   }
    else{
            m=n;
         t=0;
         for(i=0;i<m;i++){ if(a[i]==a[k]){ t++; }  }
        // cout<<t<<"\n";
        n=n-t;
        t=0;

        for(i=0;i<m;i++){ if(a[i]==a[l]){ t++; }  }
        //cout<<t<<"\n";
        n=n-t;
        cout<<n<<"\n";
    }
    return 0;
}
