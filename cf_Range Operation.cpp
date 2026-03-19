#include<bits/stdc++.h>
#define int long long
using namespace std;

int ps(int a[],int l,int k)
{

    int s;
    s=a[k];
    if(l>0){s=s-a[l-1];}
    return s;
}
int pv(int l,int k)
{


    return (k-l+1)*(k+l+2);
}

int32_t main()
{
    int a[200],b[200],s,i,j,k,t,n,m;
    cin>>t;
    while(t--)
    {

        cin>>n;
        s=0;
        for(i=0;i<n;i++){ cin>>a[i]; s=s+a[i]; b[i]=s; }
        m=b[n-1];
        for(i=0;i<n;i++){
            for(j=i;j<n;j++){

                if(m < b[n-1]-ps(b,i,j)+pv(i,j) ){ m=b[n-1]-ps(b,i,j)+pv(i,j); }

            }

        }
        cout<<m<<"\n";
    }

    return 0;
}
