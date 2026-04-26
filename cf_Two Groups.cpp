#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;

        k=l=0;

        for(i=0;i<n;i++){ cin>>a[i]; if(a[i]<0){l+=a[i];}else{k+=a[i];} }

        l=l*-1;

        l=l-k;
        if(l<0){l=l*-1;}
        cout<<l<<"\n";

    }

    return 0;
}
