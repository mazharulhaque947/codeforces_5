#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,a[100],b[100],n,t;
    string q;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cin>>q;
        l=0;
        for(i=0;i<n;i++){

            if(q[i]=='A'){l++;}
            a[i]=l;
            b[i]=i+1-l;

        }
        if(k==b[n-1]){ cout<<0<<"\n"; }
        else if(b[n-1]<k){ for(i=0;i<n;i++){ if(a[i]==k-b[n-1]){i++;break;}}  cout<<1<<"\n"<<i<<" B\n";  }
         else { for(i=0;i<n;i++){ if(b[i]==b[n-1]-k){i++;break;}}  cout<<1<<"\n"<<i<<" A\n";  }


    }


    return 0;
}
