#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],b[100],i,j,k,l,m,n,t,u,v;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0;i<n;i++){cin>>a[i];}
        for(i=0;i<m;i++){cin>>b[i];}
        sort(a,a+n);
        sort(b,b+m);
        k=0;
        l=n/2;
        for(i=0;i<l;i++){ u=b[m-1-i]-a[i]; if(u<0){u=u*-1;} k=k+u;
                          u=b[i]-a[n-1-i]; if(u<0){u=u*-1;} k=k+u;
        }
        if(n%2==1){  u=a[l]-b[l]; v=a[l]-b[m-1-l]; if(u<0){u=u*-1;} if(v<0){v=v*-1;} if(v>=u) {k+=v;}else{k+=u;} }

        cout<<k<<"\n";
    }

    return 0;
}
