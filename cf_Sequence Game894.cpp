#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[200],b[200],i,j,k,l,m,n,t;

    cin>>t;

    while(t--)
    {

        cin>>n;
        for(i=0;i<n;i++){cin>>a[i];}
        b[0]=a[0];

        m=1;
        for(i=1;i<n;i++){

            if(a[i-1]>a[i]){b[m]=a[i]; m++;}
            b[m]=a[i];
            m++;
        }

        cout<<m<<"\n";
        for(i=0;i<m;i++){ cout<<b[i]<<" "; }
        cout<<"\n";
    }

    return 0;
}
