#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],b[100],i,j,k,n,l,t,c[100],d[100];

    cin>>t;

    while(t--)
    {

        cin>>n;
        l=0;
        for(i=0;i<n;i++){ cin>>a[i]>>b[i];  if(a[i]<=10){ c[l]=b[i]; d[l]=i; l++; } }


        k=0;

        for(i=0;i<l;i++){  if(c[k]<c[i]){ k=i;  }  }

        cout<<d[k]+1<<"\n";
    }

    return 0;
}
