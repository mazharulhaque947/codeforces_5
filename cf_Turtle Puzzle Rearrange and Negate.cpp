#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[50],i,j,k,l,m,n,t;

    cin>>t;

    while(t--)



    {



        cin>>n;

        l=0;
        for(i=0;i<n;i++){ cin>>a[i];k=0; if(a[i]<0){k-a[i];}else{k+=a[i];} l+=k; }

        cout<<l<<"\n";
    }

    return 0;
}
