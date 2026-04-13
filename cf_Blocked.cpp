
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[200],b[100],i,j,n,m,t;
    cin>>t;
    while(t--)
    {

        cin>>n;
        for(i=0;i<100;i++){b[i]=0;}

        for(i=0;i<n;i++){ cin>>a[i]; b[a[i]-1]++; }

        m=1;
        for(i=0;i<100;i++){ if(b[i]>1){m=0; break;} }
        sort(a,a+n);
        if(m==1){ for(i=0;i<n;i++){ cout<<a[n-1-i]<<" "; }cout<<"\n";}
        else{ cout<<"-1\n"; }
    }

    return 0;
}
