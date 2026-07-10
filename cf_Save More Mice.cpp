#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],i,h,l,k,n,t;
    cin>>t;
    while(t--)
    {

        cin>>n>>k;

        for(i=0;i<k;i++){cin>>a[i];}


        sort(a,a+k,greater<int>());
        h=0;
        i=0;
        while(i<k&&h+(n-a[i])<n){ h+=(n-a[i]); i++; }
        cout<<i<<"\n";
    }
    return 0;
}
