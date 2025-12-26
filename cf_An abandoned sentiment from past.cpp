#include<bits/stdc++.h>

using namespace std;
int so(int a[],int n)
{
   // sort(b,b+n);
    int t=1,b[n];
    for(int i=0;i<n;i++){b[i]=a[i];}
    sort(b,b+n);
    for(int i=0;i<n;i++){ cout<<a[i]<<" "<<b[i]<<"\n"; if(a[i]!=b[i]){t=0;} }
    return t;
}

int main()
{
    int a[100],i,j,k,m,n,l;

    cin>>n>>k;
    m=0;
    for(i=0;i<n;i++){ cin>>a[i]; if(a[i]==0){l=i; m++;} }
    for(i=0;i<k;i++){ cin>>j; }

    if(m>1){cout<<"YES\n";}
    else{
        a[l]=j;
        if(so(a,n)==0){cout<<"YES\n";}
        else{cout<<"NO\n";}
    }

    return 0;
}
