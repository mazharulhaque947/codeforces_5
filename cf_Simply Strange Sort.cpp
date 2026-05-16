#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[1000],i,j,t,k,l,m,n,o,p;

    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){cin>>a[i];}
        k=0;

        for(i=0;i<n-1;i++){

            for(j=0;j<n-1;j++){ if(a[j+1]<a[j]){k++; swap(a[j],a[j+1]);} }

        }
     cout<<k<<"\n";
    }
    return 0;
}
