#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],b,i,j,k,n,t;

    cin>>t;

    while(t--)
    {
        cin>>n;

        for(i=0;i<100;i++){a[i]=0;}
         for(i=0;i<n;i++){cin>>k;a[k-1]++;}
         j=0;
        for(i=0;i<100;i++){ if(a[i]>0&& a[i]%2==0){j=1;} }

        if(j){cout<<"YES\n";}
        else{cout<<"NO\n";}

    }

    return 0;
}
