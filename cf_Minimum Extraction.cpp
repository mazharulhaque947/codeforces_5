#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],i,j,h,k,l,m,n,t,v;
    cin>>t;
    while(t--)
    {

        cin>>n;

        for(i=0;i<n;i++){cin>>a[i];}
         sort(a,a+n);
        v=a[0];
        m=0;

        for(i=1;i<n;i++){ m=m+a[i-1]; if(a[i]-m>v){v=a[i]-m;} }
        cout<<v<<"\n";
    }


    return 0;
}
