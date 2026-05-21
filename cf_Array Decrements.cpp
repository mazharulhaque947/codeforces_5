#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a[500],b[500],i,j,k,n,m,t,o,p;

    cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){ cin>>a[i]; }
        cin>>b[0];

        k=a[0]-b[1];
        o=1;
         for(i=1;i<n;i++){cin>>b[i]; if(a[i]-b[i]!=k){ if(b[i]==0&&a[i]-b[i]<=0){  }else{o=0;} } }

        if(o==1&&k>=0){cout<<"YES\n";}
        else{cout<<"NO\n";}

    }

    return 0;
}
