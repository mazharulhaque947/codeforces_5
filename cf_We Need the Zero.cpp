#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],i,k,m,n,t;
    cin>>t;
    while(t--)
    {

        cin>>n;
        k=0;
        for(i=0;i<n;i++){cin>>a[i];k^=a[i];}

        if(k==0||n%2==1){ cout<<k<<"\n"; }
        else{cout<<-1<<"\n";}

    }
    return 0;
}
