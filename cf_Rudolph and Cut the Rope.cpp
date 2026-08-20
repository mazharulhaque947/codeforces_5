#include<bits/stdc++.h>
using namespace std;


int main()
{

    int a[50],b[50],i,j,k,l,m,n,t;

    cin>>t;

    while(t--)
    {


        cin>>n;
        k=0;

        for(i=0;i<0;i++){ cin>>a[i]>>b[i]; if(a[i]-b[i]>0){k++;} }

        cout<<k<<"\n";
    }

    return 0;
}
