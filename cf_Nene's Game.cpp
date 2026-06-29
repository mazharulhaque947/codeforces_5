#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],b[100],i,j,k,h,n,m,t;
    cin>>t;

    while(t--)
    {

        cin>>n>>k;
        for(i=0;i<n;i++){cin>>a[i];}
        for(i=0;i<k;i++){cin>>b[i];cout<<min(b[i],a[0]-1)<<" ";}
        cout<<"\n";
    }


    return 0;
}
