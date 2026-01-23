#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,a[200],i,n,m,k,l;


        cin>>n;
        for(i=0;i<n;i++){cin>>a[i];}
        sort(a,a+n);
        k=0;

        for(i=0;i<n-2;i++){
            if(a[i]+a[i+1]>a[i+2]){k=1; break;}
        }
        if(k==1){cout<<"YES\n";}
        else{cout<<"NO\n";}


    return 0;
}
