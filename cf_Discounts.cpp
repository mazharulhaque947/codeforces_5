#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],b[100],i,j,k,l,m,n,s,p,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        s=0;
        for(i=0;i<n;i++){cin>>a[i];s+=a[i];}
        sort(a,a+n);
        cin>>m;
        for(i=0;i<m;i++){cin>>b[i];cout<<s-a[n-b[i]]<<"\n";}

    }
    return 0;
}
