#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[20],i,j,k,l;
    a[0]=a[1]=1;

    for(i=2;i<20;i++){ a[i]=a[i-1]+a[i-2]; }
    cin>>l;
    cout<<a[l];

    return 0;
}
