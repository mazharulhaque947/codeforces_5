#include<bits/stdc++.h>
#define int long long
using namespace std;
int pp(int a,int b)
{
    int r;
    r=1;
    while(b>0){
        if(b%2==1){r=r*a;}
        a=a*a;
        b=b/2;
    }

    return r;
}

int vv(int a[],int n)
{

    int l=0;
    for(;n>0;){
        a[l]=n%3;
        n=n/3;
        l++;

    }
    return l;
}
int oo(int a[],int n){

   int i,j,k;
   k=0;
   j=1;
   for(i=0;i<n;i++){ k=k+a[i]*(j*3+i*(j/3)); j=j*3; }
   return k;
}

int32_t main()
{
    int i,j,k,a[100],n,t;
    cin>>t;
    while(t--)
    {

        cin>>n;
        k=vv(a,n);
        j=oo(a,k);
        cout<<j<<"\n";

    }

    return 0;
}
